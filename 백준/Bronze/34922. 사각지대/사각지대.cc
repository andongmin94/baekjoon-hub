#include <bits/stdc++.h>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double w, h, r; cin >> w >> h >> r;
    double t = r * r * M_PI / 4;
    cout << w * h - t;
}
