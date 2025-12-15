#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a, b; cin >> a >> b;
    cout << fixed << setprecision(6);
    cout << (a / (a * ((100 - b) / 100)) - 1) * 100;
}
