#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    return [&]() -> int
    {
        for (auto e : s1)
        {
            for (auto e_ : s2)
            {
                if (e == e_) answer++;
            }
        }
        return answer;
    }();
    return answer;
}