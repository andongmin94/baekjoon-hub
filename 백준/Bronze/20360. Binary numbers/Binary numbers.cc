#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> p;
    int pos = 0;
    while (n > 0)
    {
        if (n & 1) p.push_back(pos);
        n >>= 1;
        pos++;
    }

    for (int i = 0; i < p.size(); i++)
    {
        if (i) cout << ' ';
        cout << p[i];
    }
    cout << '\n';
}
