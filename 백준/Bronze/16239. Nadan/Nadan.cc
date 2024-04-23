#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n; cin >> k >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cout << i + 1 << '\n';
        k -= i + 1;
    }
    cout << k;
}
