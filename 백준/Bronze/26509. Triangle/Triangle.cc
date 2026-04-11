#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n--)
    {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        vector<int> v1;
        vector<int> v2;
        v1.push_back(a);v1.push_back(b);v1.push_back(c);
        v2.push_back(d);v2.push_back(e);v2.push_back(f);
        sort(v1.begin(), v1.end());sort(v2.begin(), v2.end());
        if (v1[0] * v1[0] + v1[1] * v1[1] == v1[2] * v1[2] &&
        v1[0] == v2[0] && v1[1] == v2[1]) cout << "YES\n";
        else cout << "NO\n";
    }
}
