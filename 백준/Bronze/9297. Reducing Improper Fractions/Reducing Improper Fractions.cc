#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n, d;
        cin >> n >> d;

        int q = n / d;
        n %= d;

        cout << "Case " << i << ": ";

        if (q == 0)
        {
            if (n == 0) cout << "0\n";
            else cout << n << "/" << d << "\n";
        }
        else
        {
            if (n == 0) cout << q << "\n";
            else cout << q << " " << n << "/" << d << "\n";
        }
    }
}
