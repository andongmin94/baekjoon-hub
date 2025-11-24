#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int cnt = 0;
        int e, n; cin >> e >> n;
        while (n--)
        {
            int m; cin >> m;
            if (m > e) cnt++;
        }
        cout << cnt << '\n';
    }
}
