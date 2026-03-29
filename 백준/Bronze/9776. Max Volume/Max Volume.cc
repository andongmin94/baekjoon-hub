#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    double m = 0;
    while (n--)
    {
        char a; cin >> a;
        if (a == 'C')
        {
            double b, c; cin >> b >> c;
            if (m < b * b * c / 3) m = b * b * c / 3;
        }
        if (a == 'L')
        {
            double b, c; cin >> b >> c;
            if (m < b * b * c) m = b * b * c;
        }
        if (a == 'S')
        {
            double b; cin >> b;
            if (m < b * b * b * 4 / 3) m = b * b * b * 4 / 3;
        }
    }
    cout << m * 3.14159;
}
