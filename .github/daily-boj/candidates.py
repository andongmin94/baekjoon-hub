"""andongmin94의 한국어 미해결 백준 문제 중 가장 낮은 티어를 찾는다."""

import json
from http.client import HTTPException
from urllib.error import HTTPError
from urllib.parse import urlencode
from urllib.request import Request, urlopen


API_URL = "https://solved.ac/api/v4/problems"
QUERY = "lang:ko oj:boj -solved_by:andongmin94 tier:b5..r1"


def _get_page(client_id, client_secret, page):
    params = urlencode({"q": QUERY, "sort": "level", "direction": "asc", "page": page})
    request = Request(f"{API_URL}?{params}", headers={
        "Accept": "application/json",
        "User-Agent": "baekjoon-hub-daily/1.0 (+https://github.com/andongmin94/baekjoon-hub)",
    })
    request.add_unredirected_header("x-client-id", client_id)
    request.add_unredirected_header("x-client-secret", client_secret)
    try:
        with urlopen(request, timeout=12) as response:
            result = json.load(response)
    except HTTPError as error:
        if error.code in (401, 403):
            reason = error.reason
            if error.headers.get_content_type() == "application/json":
                detail = json.load(error)
                reason = detail.get("error", {}).get("code") or detail.get("title", reason)
            raise ValueError(f"solved.ac API가 요청을 거부했습니다 (HTTP {error.code}, {reason}).") from None
        if error.code == 429:
            raise ValueError("solved.ac API 호출 한도에 도달했습니다.") from None
        raise ValueError(f"solved.ac API 요청이 실패했습니다 (HTTP {error.code}).") from None
    except (OSError, HTTPException):
        raise ValueError("solved.ac API와 통신할 수 없습니다.") from None
    except json.JSONDecodeError:
        raise ValueError("solved.ac API의 응답을 JSON으로 읽을 수 없습니다.") from None
    except ValueError:
        raise ValueError("solved.ac API 요청 또는 응답 형식이 잘못되었습니다.") from None

    if result.get("diagnostics"):
        messages = [item["message"] for item in result["diagnostics"]]
        raise ValueError("solved.ac 검색 조건 오류: " + " / ".join(messages))
    return result


def candidates(client_id, client_secret, solved):
    """Return one BOJ ID per eligible problem in the lowest remaining tier."""
    solved_ids = {int(problem_id) for problem_id in solved}
    if not client_id or not client_secret:
        raise ValueError("GitHub Actions에 SOLVED_AC_CLIENT_ID와 SOLVED_AC_CLIENT_SECRET을 등록해 주세요.")

    minimum_level = None
    eligible = set()
    page = 1
    while True:
        result = _get_page(client_id, client_secret, page)
        for problem in result["problems"]:
            level = problem["level"]
            if minimum_level is not None and level > minimum_level:
                return sorted(eligible)
            boj_ids = {
                int(entry["problemId"])
                for entry in problem["judgeIds"]
                if entry["ojId"] == "boj" and entry["problemId"].isdecimal()
            }
            if not boj_ids or not boj_ids.isdisjoint(solved_ids):
                continue
            minimum_level = level
            eligible.add(min(boj_ids))
        if not result["problems"] or page * result["pageSize"] >= result["total"]:
            return sorted(eligible)
        page += 1
