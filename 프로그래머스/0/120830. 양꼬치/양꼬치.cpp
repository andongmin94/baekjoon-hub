#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    return [&]() -> int
    {
        answer += n * 12000;
        answer += k * 2000;
        answer -= n / 10 * 2000;
        return answer;
    }();
    return answer;
}