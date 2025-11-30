#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t = 0, cnt = 0;
    cin >> n;
    
    while (n--)
    {
        string s; cin >> s;
        if (t < s.size()) cout << s[t];
        else cout << ' ';
        t = s.length() - 1;
    }
}