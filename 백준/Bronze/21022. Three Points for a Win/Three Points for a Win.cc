#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a[100] = { 0, };
    int b[100] = { 0, };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!i) cin >> a[j];
            else cin >> b[j];
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i]) res += 3;
        else if (a[i] == b[i]) res += 1;
    }
    cout << res;
}
