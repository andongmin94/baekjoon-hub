#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 10000; cin >> n;
    while (n--)
    {
        int a, b; cin >> a >> b;
        cnt = min(cnt, b / a);
    }
    cout << cnt;
}
