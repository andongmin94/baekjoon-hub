#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n--)
    {
        double p, c; cin >> p >> c;
        
        cout << (100 * p) / (c + 100) << '\n';
    }
}
