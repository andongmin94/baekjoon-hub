#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    int a = -1, b = -1, res = 0;
    while(n--)
    {
        int x, y; cin >> x >> y;
        if (a == -1 && b == -1)
        {
            a = x; b = y;
            continue;
        }
        
        res += abs(a - x) + abs(b - y);
        a = x; b = y;
    }
    cout << res;
}
