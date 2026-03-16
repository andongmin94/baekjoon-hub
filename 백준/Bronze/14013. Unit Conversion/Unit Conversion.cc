#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b; cin >> a >> b;
    int n; cin >> n;
    while(n--)
    {
        double t; cin >> t;
        char c; cin >> c;

        if (c == 'A')
        {
            cout << t * (b / a) << '\n';
        }
        else // 'B'
        {
            cout << t * (a / b) << '\n';
        }
    }
}
