#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    vector<int> v;
    n--;
    while (n--)
    {
        int t; cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), greater<int>());

    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > m)
        {
            cnt++;
        }
    }
    cout << cnt + 1;
}
