#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b; cin >> a >> b;
    if (a / b == (int)(a / b)) cout << (int)(a / b);
    else cout << (int)(a / b) + 1;
}
