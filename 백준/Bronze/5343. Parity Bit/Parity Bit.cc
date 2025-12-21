#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--)
    {
        int cnt = 0, r = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if ((i + 1) % 8 != 0 && s[i] == '1') r++;

            if (i != 0 && (i + 1) % 8 == 0)
            {
                if (r % 2 && s[i] == '0') cnt++;
                if (r % 2 == 0 && s[i] == '1') cnt++;

                r = 0;
            }
        }
        cout << cnt << '\n';
    }
}
