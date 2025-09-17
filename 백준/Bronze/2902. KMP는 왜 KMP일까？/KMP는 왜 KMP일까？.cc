#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    cout << s[0];
    for (int i = 1; i < s.length() - 1; i++)
        if (s[i] == '-') cout << s[i+1];
}