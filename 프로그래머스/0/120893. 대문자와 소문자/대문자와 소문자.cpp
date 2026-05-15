#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    return [&]() -> string
    {
        for (auto e : my_string)
        {
            if (e >= 'a' && e <= 'z') answer += e - 'a' + 'A';
            else answer += e - 'A' + 'a';
        }
        return answer;
    }();
    return answer;
}