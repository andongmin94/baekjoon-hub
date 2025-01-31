#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, cnt = 0; cin >> n;
    double m = n;
    while(n--)
    {
        int l; cin >> l;
        if (l == -1)
        {
            m--;
            continue;
        }
        cnt += l;
    }
    cout << fixed << setprecision(17) << cnt / m;
}
