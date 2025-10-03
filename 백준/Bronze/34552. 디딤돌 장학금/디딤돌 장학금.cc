#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 11;
    vector<int> v;
    while (a--)
    {
        int b; cin >> b;
        v.push_back(b);
    }
    cin >> a;
    int sum = 0;
    while (a--)
    {
        double q, w, e;
        cin >> q >> w >> e;
        if (w >= 2 && e >= 17) sum += v[(int)q];
    }
    cout << sum;
}
