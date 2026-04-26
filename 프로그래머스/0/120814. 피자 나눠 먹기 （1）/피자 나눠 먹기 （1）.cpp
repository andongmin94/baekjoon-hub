#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = [&]() -> int
    {
        if (n % 7) return n / 7 + 1;
        return n / 7;
    }();
    return answer;
}