#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0, cup = 0;
    for (auto e: s)
    {
        if (e == '1')
        {
            cnt++;
            cup = 2;
        }
        else
        {
            if (cup)
            {
                cup--;
                cnt++;
            }
        }
    }
    cout << cnt;
}
