#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length() - 3; i++)
    {
        if (s[i] == 'k' && s[i + 1] == 'i' && s[i + 2] == 'c' && s[i + 3] == 'k') cnt++;
    }
    cout << cnt;
}
