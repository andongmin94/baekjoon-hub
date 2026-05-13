#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    return [&]() -> vector<int>
    {
        for (auto e : strlist)
            answer.push_back(e.size());
        return answer;
    }();
    return answer;
}