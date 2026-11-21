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

from candidates import candidates


def solved_in_repository():
    names = subprocess.check_output(
        ["git", "ls-tree", "-rz", "--name-only", "HEAD", "--", "백준"]
    ).decode("utf-8").split("\0")
    pattern = re.compile(r"^백준/[^/]+/(\d+)\.")
    return {int(m[1]) for name in names if (m := pattern.match(name))}


def previous_picks(base_url):
    url = base_url.rstrip("/") + "/picks.json?run=" + os.environ["GITHUB_RUN_ID"]
    try:
        with urlopen(url, timeout=25) as response:
            published = json.load(response)
            # Start a fresh history when replacing the manually selected problems.
            return published["picks"] if published["source"] == "api" else {}
    except HTTPError as error:
        # The first deployment has no published history yet.
        if error.code == 404:
            return {}
        raise


def daily_plan(today, previous, eligible):
    day = today.isoformat()
    next_day = (today + timedelta(days=1)).isoformat()
    picks = {date: pid for date, pid in previous.items() if date <= day}
    # Keep the visible midnight-based pick during the first switch to 06:00.
    if not picks and next_day in previous:
        picks[day] = previous[next_day]
    # The last date was prepared in advance. Recheck it on the day's first run.
    if max(previous, default="") == day and picks[day] not in eligible:
        del picks[day]
    last_used = {pid: date for date, pid in sorted(picks.items())}
    for date in (day, next_day):
        if date in picks or not eligible:
            continue
        problem = min(eligible, key=lambda pid: (last_used.get(pid, ""), pid))
        picks[date] = problem
        last_used[problem] = date
    return picks


def main():
    seoul_now = datetime.now(timezone(timedelta(hours=9)))
    today = (seoul_now - timedelta(hours=6)).date()
    source = Path(__file__).parent
    client_id = os.environ.get("SOLVED_AC_CLIENT_ID", "")
    secret = os.environ.get("SOLVED_AC_CLIENT_SECRET", "")
    eligible = candidates(client_id, secret, solved_in_repository())
    previous = previous_picks(os.environ["PAGES_URL"])
    picks = daily_plan(today, previous, eligible)
    output = Path("_site")
    output.mkdir(exist_ok=True)
    shutil.copyfile(source / "index.html", output / "index.html")
    (output / "picks.json").write_text(
        json.dumps({"source": "api", "picks": picks}),
        encoding="utf-8",
    )


if __name__ == "__main__":
    main()
