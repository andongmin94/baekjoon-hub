#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int cnt = 0;

    while (a != b)
    {
        int mx = max(a, b);
        int mn = min(a, b);
        a = mx - mn;
        b = mn;
        cnt++;
    }

    cout << cnt;
}