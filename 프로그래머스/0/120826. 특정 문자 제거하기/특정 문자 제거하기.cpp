#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    return [&]() -> string
    {
        string s = "";
        for (auto e : my_string)
        {
            if (e == letter[0]) continue;
            s += e;
        }
        return s;
    }();   
    return answer;
}