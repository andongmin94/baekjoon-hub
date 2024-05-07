#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0;
    cin >> n;

    while (n--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a >= 1000 || b >= 1600 || c >= 1500 || (d <= 30 && d != -1))
        {
            cnt++;
        }
    }
    cout << cnt;
}
