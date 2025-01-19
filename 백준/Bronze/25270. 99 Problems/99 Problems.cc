#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int m = n;

    while (true)
    {
        string s = to_string(n);
        string s2 = to_string(m);
        if (n >= 10 && s[s.size() - 2] == '9' && s[s.size() - 1] == '9')
        {
            cout << n;
            break;
        }
        if (m >= 10 && s2[s2.size() - 2] == '9' && s2[s2.size() - 1] == '9')
        {
            cout << m;
            break;
        }
        n++;
        m--;
    }
}
