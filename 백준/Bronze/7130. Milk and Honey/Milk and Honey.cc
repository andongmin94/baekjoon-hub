#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, n, sum = 0; cin >> a >> b >> n;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        sum += max(a * x, b * y);
    }
    cout << sum;
}