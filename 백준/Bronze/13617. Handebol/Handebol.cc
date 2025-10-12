#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, cnt = 0; cin >> a >> b;
    while(a--)
    {
        bool b_ = true;
        for (int i = 0; i < b; i++)
        {
            int t; cin >>t;
            if (!t) b_ = false;
        }
        if (b_) cnt++;
    }
    cout << cnt;
}
