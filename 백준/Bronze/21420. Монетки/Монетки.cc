#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cnt = 0, cnt2 = 0;cin >> n;
    while(n--)
    {
        int t; cin >> t;
        if (t) cnt++;
        else cnt2++;
    }
    cout << min(cnt,cnt2);
}
