#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n, m, k;
        cin >> n >> m >> k;
        if (!n && !m && !k) break;

        int need = n / 2 + 1;              // 과반(절반 초과)
        int indep = n - m - k;             // 무소속 수
        int ans = max(0, need - m);        // 필요한 무소속 찬성 수

        if (ans <= indep) cout << ans << '\n';
        else cout << -1 << '\n';
    }
}
