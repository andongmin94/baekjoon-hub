#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, cnt = 0;
    string s; cin >> n >> k >> s;
    bool b = false;
    for (auto e : s)
    {
        if (e == '1') cnt = 0;
        else cnt++;
        if (cnt == k)
        {
            b = true;
            break;
        }
    }
    if (b) cout << 0;
    else cout << 1;
}
