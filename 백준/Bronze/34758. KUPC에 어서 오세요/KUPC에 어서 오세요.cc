#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y; cin >> x >> y;
    int n; cin >> n;
    while(n--)
    {
        int a, b; cin >> a >> b;
        int cnt = -1;
        if (a != x) cnt++;
        if (b != y) cnt++;
        cout << cnt << '\n';
    }
}
