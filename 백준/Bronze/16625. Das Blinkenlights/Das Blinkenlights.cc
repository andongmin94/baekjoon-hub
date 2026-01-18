#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int p, q, s; cin >> p >> q >> s;
    
    bool b = false;
    for (int i = 1; i <= s; i++)
    {
        if (i % p == 0 && i % q == 0)
        {
            b = true;
            break;
        }
    }
    if (b) cout << "yes";
    else cout << "no";
}
