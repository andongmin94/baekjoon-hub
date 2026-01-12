#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a;
    int b;
    cin >> a >> b;
    double sum = 0;
    while(b--)
    {
        double n, m; cin >> n >> m;
        sum += (n * m);
    }
    sum *= a;
    cout << fixed << setprecision(7) << sum;
}
