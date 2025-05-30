#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long t = 1;

    while (n--) {
        long long a, b;
        char op;
        cin >> a >> op >> b;

        if (op == '+')
        {
            t = (a + b) - t;
        }
        else if (op == '-')
        {
            t = (a - b) * t;
        }
        else if (op == '*')
        {
            long long x = a * b;
            t = x * x;
        }
        else if (op == '/')
        {
            if (a % 2 == 0) t = a / 2;
            else t = (a + 1) / 2;
        }

        cout << t << '\n';
    }
}