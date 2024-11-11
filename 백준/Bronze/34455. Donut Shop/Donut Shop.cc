#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, n; cin >> d >> n;
    while (n--)
    {
        char a;
        int b;
        cin >> a >> b;
        if (a == '+') d += b;
        else d -= b;
    }
    cout << d;
}
