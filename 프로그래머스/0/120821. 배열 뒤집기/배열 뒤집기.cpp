#include <string>
#include <vector>
#include <algorithm>  // reverse

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = [&]() -> vector<int>
    {
        reverse(num_list.begin(), num_list.end());
        return num_list;
    }();
    return answer;
}