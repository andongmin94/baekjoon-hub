#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    bool b = false;
    int cnt = 0, t = 0;
    while(n--)
    {
        int m; cin >> m;
        if (b) cnt += m - t;
        else t = m;
        b = !b;
    }
    if (b) cout << "still running";
    else cout << cnt;
}
