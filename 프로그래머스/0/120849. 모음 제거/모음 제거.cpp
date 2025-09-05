#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    return [&]() -> string
    {
        for (auto e : my_string)
        {
            if (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u')
                continue;
            else answer += e;
        }
        return answer;
    }();
    return answer;
}