#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    long long t = (1LL<<60), res = 0; 
    cin >> n;

    while(n--)
    {
        long long m; 
        cin >> m;

        if (m > t) res += (m - t);
        else t = m;
    }
    cout << res;
}