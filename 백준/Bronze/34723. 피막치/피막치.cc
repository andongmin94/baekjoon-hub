#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p,m,c,x; cin >> p >> m >> c >> x;
    int t = INT_MAX;

    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                int val = (i + j) * (j + k);
                t = min(t, abs(val - x));
            }
        }
    }
    cout << t;
}
