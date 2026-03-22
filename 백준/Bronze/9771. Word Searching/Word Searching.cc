#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 0;
    string m; cin >> m;
    while (true)
    {
        string s; cin >> s;
        if (cin.eof()) break;
        if (s.find(m) != string::npos) cnt++;
    }
    cout << cnt;
}
