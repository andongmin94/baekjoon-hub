#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    return [&]() -> int
    {
        if (dot[0] > 0)
        {
            if (dot[1] > 0) return 1;
            return 4;
        }
        else
        {
            if (dot[1] > 0) return 2;
            return 3;
        }
    }();
    return answer;
}