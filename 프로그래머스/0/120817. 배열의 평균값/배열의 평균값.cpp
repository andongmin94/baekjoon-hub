#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = [&]() -> double
    {
        double sum = 0;
        for (auto e : numbers)
        {
            sum += e;
        }
        return sum / numbers.size();
    }();
    return answer;
}