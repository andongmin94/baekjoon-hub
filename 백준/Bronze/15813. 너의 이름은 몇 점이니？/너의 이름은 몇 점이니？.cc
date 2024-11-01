#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n = 0;
    string s;
    cin >> s;
    for (auto e : s)
    {
        n += e - 'A' + 1;
    }
    cout << n;
}
