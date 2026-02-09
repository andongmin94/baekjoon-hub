#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k; cin >> n >> k;
    int sum = 0;
    m = k;
    while(k--)
    {
        int t; cin >> t;
        sum += t;
    }
    double minSum = sum - (n - m) * 3, maxSum = sum + (n - m) * 3;
    cout << minSum / n << ' ' << maxSum / n;
}
