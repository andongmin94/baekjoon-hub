"""Build the shared bookmark from the repository and the last published picks."""

from datetime import datetime, timedelta, timezone
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
from urllib.error import HTTPError
from urllib.request import urlopen

from candidates import candidates, solved_at


KST = timezone(timedelta(hours=9))


def recommendation_day(instant):
    return (instant.astimezone(KST) - timedelta(hours=6)).date()


def solved_in_repository():
    names = subprocess.check_output(
        ["git", "ls-tree", "-rz", "--name-only", "HEAD", "--", "백준"]
    ).decode("utf-8").split("\0")
    pattern = re.compile(r"^백준/[^/]+/(\d+)\.")
    readmes = {}
    for name in names:
        match = pattern.match(name)
        if match:
            paths = readmes.setdefault(int(match[1]), [])
            if name.endswith("/README.md"):
                paths.append(name)
    return readmes


def previous_picks(base_url, today):
    url = base_url.rstrip("/") + "/picks.json?run=" + os.environ["GITHUB_RUN_ID"]
    try:
        with urlopen(url, timeout=25) as response:
            published = json.load(response)
            if published["source"] != "api":
                return {}
            picks = published["picks"]
            if published.get("rule") != "until-solved":
                # Discard the old daily rotation's unearned advance.
                return {day: pid for day, pid in picks.items() if day <= today.isoformat()}
            return picks
    except HTTPError as error:
        # The first deployment has no published history yet.
        if error.code == 404:
            return {}
        raise


def completion_time(problem, readmes, client_id, secret, now):
    if problem not in readmes:
        return solved_at(client_id, secret, problem)
    submissions = []
    for path in readmes[problem]:
        text = subprocess.check_output(["git", "show", "HEAD:" + path]).decode("utf-8")
        match = re.search(r"^### 제출 일자\s+(\d{4}년 \d{1,2}월 \d{1,2}일 \d{1,2}:\d{2}:\d{2})", text, re.M)
        if match:
            submissions.append(datetime.strptime(match[1], "%Y년 %m월 %d일 %H:%M:%S").replace(tzinfo=KST))
    # Older uploads without a timestamp still prove completion as of this build.
    return min(submissions) if submissions else now


def daily_plan(today, previous, eligible, get_completion):
    day = today.isoformat()
    picks = {date: pid for date, pid in previous.items() if date <= day}
    current = picks.get(max(picks, default=""))
    effective = day
    if current is not None:
        if current in eligible:
            return picks
        completed = get_completion(current)
        if completed is None:
            return picks
        next_morning = recommendation_day(completed) + timedelta(days=1)
        effective = max(today, next_morning).isoformat()

    # Retain an already scheduled replacement if it is still a valid choice.
    last_used = {pid: date for date, pid in sorted(picks.items())}
    reserved = previous.get(effective)
    if reserved in eligible:
        picks[effective] = reserved
    elif eligible:
        picks[effective] = min(eligible, key=lambda pid: (last_used.get(pid, ""), pid))
    elif current is not None:
        picks[effective] = None
    return picks


def main():
    now = datetime.now(KST)
    today = recommendation_day(now)
    source = Path(__file__).parent
    client_id = os.environ.get("SOLVED_AC_CLIENT_ID", "")
    secret = os.environ.get("SOLVED_AC_CLIENT_SECRET", "")
    readmes = solved_in_repository()
    eligible = candidates(client_id, secret, readmes)
    previous = previous_picks(os.environ["PAGES_URL"], today)
    picks = daily_plan(today, previous, eligible,
                       lambda pid: completion_time(pid, readmes, client_id, secret, now))
    output = Path("_site")
    output.mkdir(exist_ok=True)
    shutil.copyfile(source / "index.html", output / "index.html")
    (output / "picks.json").write_text(
        json.dumps({"source": "api", "rule": "until-solved", "picks": picks}),
        encoding="utf-8",
    )


if __name__ == "__main__":
    main()
