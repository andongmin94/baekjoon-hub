#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string k;
    while(true)
    {
        string s; cin >> s;
        int a = s[0] - '0', b = s[1] - '0';
        if (s == "99999") break;
        
        if ((a+b) % 2) k = "left ";
        if ((a+b) != 0 && (a+b) % 2 == 0) k = "right ";
        
        cout << k << s[2] << s[3] << s[4] << '\n';
    }
}
