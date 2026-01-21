#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t = 0; cin >> n;
    
    while(n--)
    {
        int m; cin >> m;
        if (!t) t = m;
        else
        {
            if (m % t == 0)
            {
                cout << m << '\n';
                t = 0;
            }
        }
    }
}
