#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m; cin >> m;
        vector<pair<double, double>> v;
        while (m--)
        {
            double x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        double max_x = -1000000, min_x = 1000000, max_y = -1000000, min_y = 1000000;
        for (auto e : v)
        {
            if (e.first > max_x) max_x = e.first;
            if (e.first < min_x) min_x = e.first;
            if (e.second > max_y) max_y = e.second;
            if (e.second < min_y) min_y = e.second;
        }
        cout << fixed << setprecision(9);
        cout << "Case " << i + 1 << ":  Area " << (max_x - min_x) * (max_y - min_y) << ", Perimeter " << ((max_x - min_x) + (max_y - min_y)) * 2 << "\n";
    }
}
