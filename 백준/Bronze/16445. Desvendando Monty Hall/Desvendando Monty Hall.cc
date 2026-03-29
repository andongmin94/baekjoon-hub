#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;
    while(n--)
    {
        int m; cin >> m;
        if (m != 1) cnt++;
    }
    cout << cnt;
}
