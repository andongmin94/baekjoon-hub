#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt = 2; cin >> n;
    vector<int> v;
    while (n--)
    {
        char c; cin >> c;
        v.push_back(c);
    }
    for (int i = 1; i < v.size(); i++)
        if (v[i] != v[i - 1]) cnt++;
    cout << cnt;
}
