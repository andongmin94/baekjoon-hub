#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        int n; cin >> n;
        if (!n) break;

        int sum = 0;
        while(n--)
        {
            int t; cin >> t;
            if (sum + t <= 300) sum += t;
        }

        cout << sum << '\n';
    }
}
