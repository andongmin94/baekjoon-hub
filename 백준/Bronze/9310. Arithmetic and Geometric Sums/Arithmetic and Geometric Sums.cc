#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long exp)
{
    long long result = 1;
    while (exp)
    {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        long long n;
        cin >> n;
        if (n == 0) break;

        long long a, b, c;
        cin >> a >> b >> c;

        if (b - a == c - b)
        {
            long long d = b - a;
            long long sum = n * (2 * a + (n - 1) * d) / 2;
            cout << sum << '\n';
        }
        else
        {
            long long r = b / a;
            if (r == 1) {
                cout << a * n << '\n';
            } else {
                long long sum = a * (power(r, n) - 1) / (r - 1);
                cout << sum << '\n';
            }
        }
    }
}
