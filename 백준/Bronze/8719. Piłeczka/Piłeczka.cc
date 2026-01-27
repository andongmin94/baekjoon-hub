#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    while(n--)
    {
        int a, b, cnt = 0; cin >> a >> b;
        while (a < b)
        {
            cnt++;
            a *=2;
        }
        cout << cnt << '\n';
    }
}
