#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, sum = 0; cin >> a >> b;
    
    while(b--)
    {
        int n, m; cin >> n >> m;
        sum += n * m;
    }
    cout << sum / a;
}
