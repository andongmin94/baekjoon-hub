#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;

    int a_ = 0, a__ = 0, b_ = 0, b__ = 0;

    while (a > 0)
    {
        a_++;
        a__ += a % 10;
        a /= 10;
    }
    while (b > 0)
    {
        b_++;
        b__ += b % 10;
        b /= 10;
    }
    a = a_ * a__;
    b = b_ * b__;
    if (a > b) cout << 1;
    else if (a < b) cout << 2;
    else cout << 0;
}
