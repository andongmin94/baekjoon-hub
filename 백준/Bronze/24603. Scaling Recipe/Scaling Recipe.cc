#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;

    while (n--) {
        int t;
        cin >> t;
        cout << t * y / x << '\n';
    }
}