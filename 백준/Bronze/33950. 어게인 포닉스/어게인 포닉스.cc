#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'P' && s[i+1] == 'O') cout << "PH";
            else cout << s[i];
        }
        cout << '\n';
    }
}
