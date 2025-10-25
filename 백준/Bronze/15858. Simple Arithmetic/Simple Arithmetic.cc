#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    cin >> a >> b >> c;
    d = a * b;
    if (d >= 10 * c)
    {
        cout << d / (10 * c);
        d %= 10 * c;
    }
    cout << setprecision(18) << fixed << (long double)d / c;
}
