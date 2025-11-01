#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum = 0;
    cin >> n;
    while (n--)
    {
        int h, b, k;
        cin >> h >> b >> k;

        sum += max(0, b - h) * k;
    }
    cout << sum;
}
