#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double r, g, b;
    cin >> r >> g >> b;

    r /= 255.0;
    g /= 255.0;
    b /= 255.0;

    double k = 1.0 - max({r, g, b});
    double c, m, y;

    if (abs(1.0 - k) < 1e-12) {  // 즉 k == 1, 완전 검정
        c = m = y = 0.0;
    } else {
        c = (1.0 - r - k) / (1.0 - k);
        m = (1.0 - g - k) / (1.0 - k);
        y = (1.0 - b - k) / (1.0 - k);
    }

    cout << fixed << setprecision(4);
    cout << c << ' ' << m << ' ' << y << ' ' << k << '\n';
}