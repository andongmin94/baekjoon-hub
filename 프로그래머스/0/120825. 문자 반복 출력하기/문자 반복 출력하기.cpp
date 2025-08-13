#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    return [&]() -> string
    {
        string s = "";
        for (auto e : my_string)
        {
            for (int i = 0; i < n; i++)
                s += e;
        }
        return s;
    }();
    return answer;
}