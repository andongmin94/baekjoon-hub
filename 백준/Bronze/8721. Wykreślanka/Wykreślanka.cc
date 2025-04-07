#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int t = 0, cnt = 0;
    while(n--)
    {
        int m; cin >> m;
        if (m != t + 1) cnt++;
        else t++;
    }
    cout << cnt;
}
