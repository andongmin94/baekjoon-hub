#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cout << "Case " << i << ": ";
        int n, r1, c1, r2, c2;
        cin >> n >> r1 >> c1 >> r2 >> c2;

        bool b = false;
        if (r1-1 == r2 && c1+2 == c2) b = true;
        if (r1-1 == r2 && c1-2 == c2) b = true;
        if (r1+1 == r2 && c1+2 == c2) b = true;
        if (r1+1 == r2 && c1-2 == c2) b = true;
        if (r1-2 == r2 && c1+1 == c2) b = true;
        if (r1-2 == r2 && c1-1 == c2) b = true;
        if (r1+2 == r2 && c1+1 == c2) b = true;
        if (r1+2 == r2 && c1-1 == c2) b = true;

        cout << (b ? "YES\n" : "NO\n");
    }
}