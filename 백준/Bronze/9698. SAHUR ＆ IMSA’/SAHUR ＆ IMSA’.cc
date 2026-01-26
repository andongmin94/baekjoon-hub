#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Case #" << i + 1 << ": ";
        
        int a, b; cin >> a >> b;
        
        if (b >= 45) cout << a << ' ' << b - 45 << '\n';
        else
        {
            if (!a) a = 23;
            else a--;
            cout << a << ' ' << 60 + (b - 45) << '\n';
        }
    }
}
