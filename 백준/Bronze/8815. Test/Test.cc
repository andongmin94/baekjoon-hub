#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    char answers[4] = {'A', 'B', 'C', 'D'};
    while (n--)
    {
        int m; cin >> m;
        int moved = (m - 1) / 3;
        int movedLeft = (m - 1) % 3;
        cout << answers[(moved + movedLeft) % 4] << '\n';
    }
}
