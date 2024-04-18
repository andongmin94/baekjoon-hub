#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long q = 2e9, w = -2e9;
    while (n--)
    {
        long long a, b; cin >> a >> b;
        q = min(b, q);
        w = max(b, w);
    }

    cout << w - q;
}
