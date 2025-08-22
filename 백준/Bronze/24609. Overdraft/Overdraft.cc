#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, t = 0, cnt = 0;;
    cin >> n;
    while(n--)
    {
        long long m; cin >> m;
        t += m;
        if (t < 0)
        {
            cnt += t * (-1);
            t = 0;
        }
        
    }
    cout << cnt;
}
