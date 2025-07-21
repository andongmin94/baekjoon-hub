#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int caseNum = 1;

    while (cin >> N && N != 0)
    {
        vector<int> month(13, 0);

        for (int i = 0; i < N; i++)
        {
            int dd, mm, yyyy;
            cin >> dd >> mm >> yyyy;
            month[mm]++;   // 월만 카운트
        }

        cout << "Case #" << caseNum++ << ":\n";

        string names[13] =
        {
            "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
        };

        for (int i = 1; i <= 12; i++)
        {
            cout << names[i] << ":";
            cout << string(month[i], '*') << "\n";
        }
    }
}