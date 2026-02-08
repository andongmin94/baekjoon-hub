#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    while (n--)
    {
        int t = 10;
        double r = 0;
        double g = 0;
        double b = 0;
        while(t--)
        {
            int a, a2, a3; cin >> a >> a2 >> a3;
            r += a;
            g += a2;
            b += a3;       
        }
        cout << fixed << setprecision(0);
        cout << round(r / 10) << ' ' << round(g / 10) << ' ' << round(b / 10) << '\n';
    }
}
