#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    bool b = true;
    while (n--)
    {
        int m; cin >> m;
        if (m < 48) b = false;
    }
    if (b) cout << "True";
    else cout << "False";
}