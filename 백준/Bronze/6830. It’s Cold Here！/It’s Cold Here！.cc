#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = ""; int i = 1000000;
    while (true)
    {
        string a; int b;
        cin >> a >> b;

        if (b < i)
        {
            i = b;
            s = a;
        };
        
        if (a == "Waterloo") break;
    }
    cout << s;
}
