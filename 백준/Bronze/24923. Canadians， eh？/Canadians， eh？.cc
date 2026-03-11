#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    bool b = false;
    if (s[s.length()-3] == 'e' && s[s.length()-2] == 'h' && s[s.length()-1] == '?') b = true;
    if (b) cout << "Canadian!";
    else cout << "Imposter!";
}
