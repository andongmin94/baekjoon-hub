#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    vector<string> v;
    while (n--)
    {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    cin >> n;
    while (n--)
    {
        int m; cin >> m;
        if (m > v.size() || m <= 0) cout << "Rule " << m << ": No such rule\n";
        else cout << "Rule " << m << ": " << v[m - 1] << '\n';
    }
}
