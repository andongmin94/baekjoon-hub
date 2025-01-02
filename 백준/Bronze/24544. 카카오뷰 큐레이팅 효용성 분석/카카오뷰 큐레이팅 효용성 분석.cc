#include <bits/stdc++.h>

using namespace std;

int a[10000001];

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, sum = 0; cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m; cin >> m; a[i] = m;
        sum += m;
    }
    cout << sum << '\n';
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        int m; cin >> m;
        if (!m) sum += a[i];
    }
    cout << sum;
}
