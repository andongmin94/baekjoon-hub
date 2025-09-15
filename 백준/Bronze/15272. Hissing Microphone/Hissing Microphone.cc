#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    bool b = false;
    for (int i = 0; i < s.length() - 1; i++)
        if (s[i] == 's' && s[i + 1] == 's')
        {
            b = true;
            break;
        }
    if (!b) cout << "no ";
    cout << "hiss";
}