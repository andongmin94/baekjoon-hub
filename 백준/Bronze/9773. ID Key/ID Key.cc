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
        int sum = 0;
        for (char c : s) sum += c - '0';

        int last3 = stoi(s.substr(s.size() - 3));
        int t = last3 * 10;

        int ans = sum + t;

        if (ans < 1000) ans += 1000;
        else if (ans >= 10000) ans %= 10000;

        cout << setw(4) << setfill('0') << ans << "\n";
    }
}
