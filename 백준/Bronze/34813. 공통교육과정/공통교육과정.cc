#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    if (s[0] == 'F') cout << "Foundation";
    if (s[0] == 'C') cout << "Claves";
    if (s[0] == 'V') cout << "Veritas";
    if (s[0] == 'E') cout << "Exploration";
}