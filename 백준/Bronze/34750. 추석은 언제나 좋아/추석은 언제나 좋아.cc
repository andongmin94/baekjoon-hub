#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a, b;

    if (n >= 1000000) a = n * 20 / 100;
    else if (n >= 500000) a = n * 15 / 100;
    else if (n >= 100000) a = n * 10 / 100;
    else a = n * 5 / 100;

    b = n - a;

    cout << a << " " << b;
}
