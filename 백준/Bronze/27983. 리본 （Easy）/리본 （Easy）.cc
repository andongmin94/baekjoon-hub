#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    vector<int> x;
    vector<int> l;
    vector<string> c;
    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        x.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        int t; cin >> t;
        l.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        string t; cin >> t;
        c.push_back(t);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(x[j] - x[i]) <= l[j] + l[i] && c[j] != c[i])
            {
                cout << "YES" << '\n';
                cout << i + 1 << ' ' << j + 1;
                return 0;
            }
        }
    }
    cout << "NO";
}
