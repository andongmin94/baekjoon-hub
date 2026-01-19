#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n, x, y, n_; cin >> n >> x >> y;
        vector<int> v;
        n_ = n;
        while(n--)
        {
            int m; cin >> m;
            v.push_back(m);
        }
        
        if (v[0] != x && v[n_ - 1] != y) cout << "OKAY\n";
        else if (v[0] != x) cout << "HARD\n";
        else if (v[n_ - 1] != y) cout << "EASY\n";
        else cout << "BOTH\n";
    }
}
