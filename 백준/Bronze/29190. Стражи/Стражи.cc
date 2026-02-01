#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    int x, y;
    cin >> x >> y;

    int k;
    cin >> k;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int dist = abs(i - x) + abs(j - y);
            if (dist <= k) {
                count++;
            }
        }
    }

    count--;

    cout << count << '\n';
}
