#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p; cin >> p;
    while (p--)
    {
        int n, k; cin >> n >> k;
        cout << n << ' ';
        int sum = 0;
        while (k--)
        {
            sum += k + 2;
        }
        cout << sum;
        cout << '\n';
    }
}
