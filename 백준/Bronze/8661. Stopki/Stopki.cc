#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, a, b; cin >> x >> a >> b;
    while(x >= 0)
    {
        x -= a;
        if (x < 0)
        {
            cout << 1;
            break;
        }
        x -= b;
        if (x < 0)
        {
            cout << 0;
            break;
        }
    }
}
