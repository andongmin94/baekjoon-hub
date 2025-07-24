#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = [&]() -> int
    {
        int res = 0;
        for (auto e : array)
        {
            if (e > height) res++;
        }
        return res;
    }();
    return answer;
}