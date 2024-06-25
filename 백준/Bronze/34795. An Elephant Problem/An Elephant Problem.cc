#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double a, b; cin >> a >> b;
    
    if (b / a == (int)(b / a)) cout << (int)(b / a);
    else cout << (int)(b / a) + 1;
}
