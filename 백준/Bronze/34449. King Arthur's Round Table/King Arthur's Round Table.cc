#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double d, w, n;
    cin >> d >> w >> n;
    if (d * 3.14159 >= w * n) cout << "YES";
    else cout << "NO";
}