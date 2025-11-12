#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 0; cin >> n;
    string s, s2;
    cin >> s;
    cin >> s2;
    for (int i = 0; i < (s.length() > s2.length() ? s2.length() : s.length()); i++)
    {
        if (s[i] == 'C' && s[i] == s2[i]) cnt++;
    }
    cout << cnt;
}
