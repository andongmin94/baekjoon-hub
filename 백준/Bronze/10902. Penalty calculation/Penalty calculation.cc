#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, idx, t_, s_ = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t, s;
        cin >> t >> s;
        if (s_ < s) idx = i, t_ = t, s_ = s;
    }

    if (s_ == 0) cout << 0;
    else cout << t_ + (idx - 1) * 20;
}
