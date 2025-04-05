#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int arr[4] = {0,};
    arr[0] = 10000;
    int m = n, k;
    n *= 3;
    while(n--)
    {
        int t; cin >> t;
        arr[t]++;
        if (arr[t] > m) k = t;
    }
    int l = 10000, idx;
    for (int i = 1; i < 4; i++)
    {
        if (arr[i] < l)
        {
            l = arr[i];
            idx = i;
        }
    }
    cout << idx << '\n' << k;
}
