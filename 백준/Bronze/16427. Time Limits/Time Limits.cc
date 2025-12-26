#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, s;
    double m = 0;
    
    cin >> n >> s;
    
    while(n--)
    {
        double t;
        cin >> t;
        m = max(t, m);
    }
    m *= s;
    if ((int)(m / 1000) == m / 1000) cout << (int)(m / 1000);
    else cout << (int)(m / 1000) + 1;
}
