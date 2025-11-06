#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b; cin >> a >> b;
        cout << "Data Set " << i << ":\n";
        if (a <= b) cout << "no ";
        while (a > b * 5)
        {
            cout << "mega ";
            a /= 5;
        }
        cout << "drought\n\n";
    }
}
