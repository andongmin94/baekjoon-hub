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
        string s_ = "";
		s_ += s[0];
		s_ += s[1];
        int a = stoi(s_);
        s_ = "";
        s_ += s[2];
        s_ += s[3];
        int b = stoi(s_);
        int t = a * a + b * b;
        if (t % 7 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
