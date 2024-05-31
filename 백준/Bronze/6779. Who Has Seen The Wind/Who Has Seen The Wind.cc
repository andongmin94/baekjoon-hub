#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, m;
    cin >> h >> m;

    int t = 0;
    while (++t)
    {
        int a = (-6) * pow(t, 4) + h * pow(t, 3) + 2 * pow(t, 2) + t;
        if (a <= 0)
        {
            cout << "The balloon first touches ground at hour: " << t;
            break;
        }
        if (t == m)
        {
            cout << "The balloon does not touch ground in the given time.";
            break;
        }
    }
}
