#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, s_ = ""; cin >> s;
    int u = -1, f;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'U' && u == -1) u = i;
        if (s[i] == 'F') f = i;
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        if (i < u) s_ += '-';
        if (i == u) s_ += 'U';
        if (i > u && i < f) s_ += 'C';
        if (i == f) s_ += 'F';
        if (i > f) s_ += '-';
    }
    cout << s_;
    
}
