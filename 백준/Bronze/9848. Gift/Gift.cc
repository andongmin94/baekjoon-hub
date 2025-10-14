#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t = 0, cnt = 0;
    cin >> n >> k;
    
    while (n--)
    {
        int m; cin >> m;
        if (m <= t - k) cnt++;
        t = m;
    }
    cout << cnt;
}
