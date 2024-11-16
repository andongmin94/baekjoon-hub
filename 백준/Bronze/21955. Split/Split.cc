#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
        if (i == s.size() / 2 - 1) cout << ' ';
    }
}
