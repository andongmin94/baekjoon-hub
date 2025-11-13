#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    return [&]() -> vector<int>
    {
        vector<int> v;
        int a = 0, b = 0;
        for (auto e : num_list)
        {
            if (e % 2) b++;
            else a++;
        }
        v.push_back(a);
        v.push_back(b);
        return v;
    }();
    return answer;
}