#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    string s, s2; cin >> s >> s2;

    for (int i = 0; i < 4; i++)
    {
        if (s[i] != s2[i]) cnt++;
    }
    cnt = pow(2, cnt);
    cout << cnt;
}
