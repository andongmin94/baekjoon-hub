#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    while (n--)
    {
        int t; cin >> t;
        char c; cin >> c;
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << c;
            }
            c++;
            if (c > 'Z') c = 'A';
            cout << '\n';
        }
        cout << '\n';
    }
}
