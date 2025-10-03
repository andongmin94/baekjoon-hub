#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a, b, c; cin >> a >> b >> c;
    a *= 5280;
    a /= 3600;

    if (a * c >= b) cout << "MADE IT";
    else cout << "FAILED TEST";
}