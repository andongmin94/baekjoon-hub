#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0;
    while(true)
    {
        int n; cin >> n;
        if (!n) break;
        t++;
        cout << "User " << t << '\n';
        int m; cin >> m;
        while(m--)
        {
            int l; cin >> l;
            cout << fixed << setprecision(5);
            cout << (double)n * l / 100000 << '\n';
        }
    }
}
