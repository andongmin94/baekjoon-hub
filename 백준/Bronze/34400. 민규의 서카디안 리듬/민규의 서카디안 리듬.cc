#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        n %= 25;

        if (n < 17) cout << "ONLINE\n";
        else cout << "OFFLINE\n";
    }
}