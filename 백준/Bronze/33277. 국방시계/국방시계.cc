#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double n, m;
    cin >> n >> m;

    double ratio = m / n;
    int q = round(86400 * ratio);
    
    int h = q / 3600;
    int mnt = (q % 3600) / 60;
    int s = q % 60;

    cout << setfill('0') << setw(2) << h << ":"
         << setfill('0') << setw(2) << mnt << "\n";
}
