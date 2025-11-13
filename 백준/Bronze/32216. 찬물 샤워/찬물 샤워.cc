#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, t, sum = 0; cin >> n >> k >> t;
    
    while (n--)
    {
        int d; cin >> d;
        if (t < k) t = t + d + abs(t - k);
        else t = t + d - abs(t - k);
        sum += abs(t - k);
    }
    cout << sum;
}
