#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    while (n--)
    {
        int x; cin >> x;

        int sum = 0;
        bool many = false;

        for (int i = 0; i < x + 1; i++)
        {
            string s; 
            cin >> s;

            if (s == "!") many = true;
            else sum += stoi(s);

            if (i < x)
            {
                string plus;
                cin >> plus;
            }
        }

        if (many || sum >= 10) cout << "!\n";
        else cout << sum << "\n";
    }
}