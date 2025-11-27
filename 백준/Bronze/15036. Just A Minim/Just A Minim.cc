#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double v = 0; cin >> n;
    
    map<int, double> m;
    m.insert(pair<int, double>(0, 2));
    m.insert(pair<int, double>(1, 1));
    m.insert(pair<int, double>(2, 0.5));
    m.insert(pair<int, double>(4, 0.25));
    m.insert(pair<int, double>(8, 0.125));
    m.insert(pair<int, double>(16, 0.0625));
    while (n--)
    {
        int k; cin >> k;
        v += m[k];
    }
    cout << fixed << setprecision(6);
    cout << v;
}