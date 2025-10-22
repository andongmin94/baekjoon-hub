#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c = 0; cin >> a >> b;
    
    while (a >= b)
    {
        int t = a - b;
        a = b;
        b = t;
        c++;
    }
    cout << c + 2;
}
