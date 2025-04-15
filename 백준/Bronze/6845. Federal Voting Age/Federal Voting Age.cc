#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int q = 2007, w = 2, e = 27;
    while(n--)
    {
        int a, b, c; cin >> a >> b >> c;
        if (a < q - 18)
        {
            cout << "Yes\n";
            continue;
        }
        else if (a == q - 18)
        {
            if (b < 2)
            {
                cout << "Yes\n";
                continue;
            }
            else if (b == 2)
            {
                if (c <= e)
                {
                    cout << "Yes\n";
                    continue;
                }
                else cout << "No\n";
            }
            else cout << "No\n";
        }
        else cout << "No\n";
    }
}
