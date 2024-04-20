#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, d;
    cin >> k >> d;

    long long total = 0;
    int cnt = 0;
    long long days = k;

    while (total + days <= d)
    {
        total += days;
        cnt++;
        days *= 2;
    }

    cout << cnt;
}
