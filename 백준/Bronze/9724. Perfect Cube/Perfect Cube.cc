#include <bits/stdc++.h>

using namespace std;

using int64 = long long;

int64 icbrt(int64 x)
{
    int64 r = cbrt(x);
    while ((r + 1) * (r + 1) * (r + 1) <= x) r++;
    while (r * r * r > x) r--;
    return r;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int64 a, b;
        cin >> a >> b;

        int64 l = icbrt(a);
        if (l * l * l < a) l++;

        int64 r = icbrt(b);
        if (r * r * r > b) r--;

        int64 cnt = max(0LL, r - l + 1);

        cout << "Case #" << i + 1 << ": " << cnt << "\n";
    }
}
