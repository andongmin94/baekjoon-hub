#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int y, c, p; cin >> y >> c >> p;
    
    cout << min(y / 1, min (c / 2, p / 1));
}
