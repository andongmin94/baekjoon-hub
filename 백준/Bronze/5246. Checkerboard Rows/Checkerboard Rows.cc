#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n--)
    {
        int arr[9][9] = {0,};
        int m, cnt = 0; cin >> m;
        while(m--)
        {
            int x, y; cin >> x >> y;
            arr[x][y]++;
        }
        for (int i = 1; i < 9; i++)
        {
            int l = 0;
            for (int j = 1; j < 9; j++)
            {
                if (arr[j][i]) l++;
            }
            cnt = max(cnt, l);
        }
        cout << cnt << '\n';
    }
}
