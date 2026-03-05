#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        int a, b; cin >> a >> b;
        if (!a && !b) break;
        int arr[501][101] = {0,};
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < a; j++)
            {
                int t; cin >> t;
                arr[i][j] = t;
            }
        }
        bool b_ = false;
        for (int i = 0; i < b; i++)
        {
            bool b__ = true;
            for (int j = 0; j < b; j++)
            {
                if (!arr[j][i]) b__ = false;
            }
            if (b__) b_ = true;
        }
        if (b_) cout << "yes\n";
        else cout << "no\n";
    }
}
