#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    return [&]() -> int
    {
        for (auto e : message)
        {
            answer++;
            answer++;
        }
        return answer;
    }();
    return answer;
}