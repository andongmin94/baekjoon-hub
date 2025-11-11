#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;
    while (n--)
    {
        double a, b, c, d; cin >> a >> b >> c >> d;
        if ((a + b + c <= 125 || a <= 56 && b <= 45 && c <= 25) && d <= 7)
        {
            cout << 1 << '\n';
            cnt++;
        }
        else cout << 0 << '\n';
    }
    cout << cnt;
}
