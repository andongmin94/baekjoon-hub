#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<long long> v(4);
    for (int i = 0; i < 4; i++) cin >> v[i];

    sort(v.begin(), v.end());

    cout << v[0] << ' ' << v[2] << ' ' << v[1] << ' ' << v[3] << '\n';
}