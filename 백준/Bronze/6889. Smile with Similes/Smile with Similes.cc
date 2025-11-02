#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    vector<string> v1, v2;
    while (a--)
    {
        string s; cin >> s;
        v1.push_back(s);
    }
    while (b--)
    {
        string s; cin >> s;
        v2.push_back(s);
    }
    for (auto e : v1)
    {
        for (auto e_ : v2)
        {
            cout << e << " as " << e_ << '\n';
        }
    }
}
