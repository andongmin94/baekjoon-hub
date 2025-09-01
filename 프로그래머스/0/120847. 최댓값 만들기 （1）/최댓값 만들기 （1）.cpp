#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    return [&]() -> int 
    {
        for (int i = 0; i < numbers.size() - 1; i++)
        {
            for (int j = i + 1; j < numbers.size(); j++)
            {
                if (numbers[i] * numbers[j] > answer) answer = numbers[i] * numbers[j];
            }
        }
        return answer;
    }();
    return answer;
}