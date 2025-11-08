#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b; cin >> n >> a >> b;
    string s, s2 = "";
    cin >> s;

    for (int i = 0; i < a - 1; i++)
    {
        s2 += s[i];
    }
    for (int i = b - 1; i >= a - 1; i--)
    {
        s2 += s[i];
    }
    for (int i = b; i < n; i++)
    {
        s2 += s[i];
    }
    cout << s2;
}
