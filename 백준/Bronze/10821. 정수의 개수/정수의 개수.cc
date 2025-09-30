#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int cnt = 1;
    for (auto e : s)
    {
        if (e == ',') cnt++;
    }
    cout << cnt;
}
