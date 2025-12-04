#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    return [&]() -> int
    {
        for (auto e : my_string)
        {
            if (isdigit(e))
            {
                answer += e - '0';
            }
        }
        return answer;
    }();
    return answer;
}