#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, cnt = -14298; cin >> n;
    while (n--)
    {
        long long m; cin >> m;
        if (m == cnt)
        {
            cout << 0;
            return 0;
        }
        cnt = m;
    }
    cout << 1;
}
