#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer = [&]() -> vector<int>
    {
        vector<int> v;
        v.push_back(money / 5500);
        v.push_back(money % 5500);
        return v;
    }();
    return answer;
}