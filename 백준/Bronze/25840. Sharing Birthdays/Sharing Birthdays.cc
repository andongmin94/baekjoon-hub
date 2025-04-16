#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    map<string, int> m;
    while (n--)
    {
        string s; cin >> s;
        m[s]++;
    }
    cout << m.size();
}
