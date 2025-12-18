#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, cnt = 0, k, x, y; cin >> n >> k >> x >> y;
    
    while(n--)
    {
        int a, b; cin >> a >> b;
        
        if (pow(k, 2) < pow(x-a, 2) + pow(y-b, 2)) cnt++;
    }
    cout << cnt;
}
