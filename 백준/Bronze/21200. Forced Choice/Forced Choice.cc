#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c; cin >> a >> b >> c;
    while(c--)
    {
        int t; cin >> t;
        vector<int> v;
        bool b_ = true;
        while(t--)
        {
            int m; cin >> m;
            if (m == b) b_ = false;
        }
        if (b_) cout << "REMOVE\n";
        else cout << "KEEP\n";
    }
}
