#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = [&]() -> int {
        return 2023 - age;
    }();
    return answer;
}