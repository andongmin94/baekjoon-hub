#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b; cin >> a >> b;
    cout << max(0, 10 + 2 * (25 - a + b));
}
