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

        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0) sum += i;
        }
        if (sum < n) cout << n << " is a deficient number.";
        if (sum == n) cout << n << " is a perfect number.";
        if (sum > n) cout << n <<  " is an abundant number.";
        cout << "\n\n";
    }
}