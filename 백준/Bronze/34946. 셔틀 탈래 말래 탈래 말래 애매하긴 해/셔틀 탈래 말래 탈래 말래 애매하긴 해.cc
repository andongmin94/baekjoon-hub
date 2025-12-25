#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d; cin >> a >> b >> c >> d;
    
    bool w = false, s = false;
    if (a + b <= d) s = true;
    if (c <= d) w = true;
    if (w && s) cout << "~.~";
    else if (!w && !s) cout << "T.T";
    else if (s) cout << "Shuttle";
    else if (w) cout << "Walk";
}
