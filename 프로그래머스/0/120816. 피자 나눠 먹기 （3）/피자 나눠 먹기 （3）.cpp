#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = [&]() -> int
    {
        if (n % slice == 0) return n / slice;
        return n / slice + 1;
    }();
    return answer;
}