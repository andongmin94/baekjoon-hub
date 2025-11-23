#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    return [&]() -> int
    {
        for (int i = 0; i <= n; i++)
            if(i % 2 == 0) answer += i;
        return answer;
    }();
    return answer;
}