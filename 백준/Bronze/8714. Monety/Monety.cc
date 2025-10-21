#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, zero = 0, one = 0;
    cin >> n;
    while (n--)
    {
        int m; cin >> m;
        if (m) one++;
        else zero++;
    }
    cout << min(zero, one);
}
