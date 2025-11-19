#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    if (100 * M >= 81 * N) cout << "yaho";
    else cout << "no";
}
