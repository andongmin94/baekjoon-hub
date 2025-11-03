#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        int a, b, t, sum = 0; cin >> a >> b;
        t = a;
        if (!a && !b) break;
        while (t--)
        {
            int c; cin >> c;
            if (b / a - c < 0) sum += b / a;
            else sum += c;
        }
        cout << sum << '\n';
    }
}
