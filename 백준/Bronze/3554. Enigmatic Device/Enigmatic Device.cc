#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v;
    while(n--)
    {
        int m; cin >> m;
        v.push_back(m);
    }
    cin >> n;
    while(n--)
    {
        int a,b,c; cin >> a >> b >> c;
        
        if (a == 1)
        {
            for (int i = b - 1; i < c; i++)
            {
                v[i] = (v[i] * v[i]) % 2010;
            }
        }
        else
        {
            int sum = 0;
            for (int i = b - 1; i < c; i++)
            {
                sum += v[i];
            }
            cout << sum << '\n';
        }
    }
}
