#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(') cout << '\n';
        else if (i == s.length() - 1 && s[i] == ')') continue;
        else if (i == s.length() - 1 && s[i] != ')') cout << s[i] << "\n-";
        else cout << s[i];
    }
}
