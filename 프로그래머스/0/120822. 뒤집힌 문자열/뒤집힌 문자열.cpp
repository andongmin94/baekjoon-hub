#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    return [&]() -> string
    {
        string s = "";
        for (int i = my_string.length() - 1; i >= 0; i--)
            s += my_string[i];
        return s;
    }();
    return answer;
}