#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n--)
    {
        int m; cin >> m;
        int t, idx = 1, cnt; cin >> t;
        m--;
        while(m--)
        {
            int i; cin >> i;
            t++;
            idx++;
            if (t != i) cnt = idx--;
        }
        cout << cnt << '\n';
    }
}
