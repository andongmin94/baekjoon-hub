#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    while (n--)
    {
        int q, w;
        cin >> q >> w;

        if (w % q == 0) cout << "TAK\n";
        else cout << "NIE\n";
    }
}
