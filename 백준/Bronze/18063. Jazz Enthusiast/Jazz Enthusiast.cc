#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    b = (a - 1) * b;
    int c = 0, d = 0;
    while(a--)
    {
        int q; char w; int e;
        cin >> q >> w >> e;
        c += q; d += e;
    }
    int t = c * 60 + d - b;

    cout << setfill('0')
         << setw(2) << t / 3600 << ":"
         << setw(2) << (t % 3600) / 60 << ":"
         << setw(2) << t % 60;
}