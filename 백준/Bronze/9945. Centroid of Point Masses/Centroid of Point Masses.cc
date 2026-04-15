#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int tc = 1;

    while (cin >> n)
    {
        if (n < 0) break;

        long long sumM = 0;
        long long sumMX = 0;
        long long sumMY = 0;

        for (int i = 0; i < n; ++i) {
            long long x, y, m;
            cin >> x >> y >> m;
            sumM += m;
            sumMX += x * m;
            sumMY += y * m;
        }

        double a = static_cast<double>(sumMX) / sumM;
        double b = static_cast<double>(sumMY) / sumM;

        cout << "Case " << tc++ << ": "
             << fixed << setprecision(2)
             << a << ' ' << b << '\n';
    }

    return 0;
}