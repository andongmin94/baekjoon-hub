#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    for (auto e : s)
    {
        if (e >= 'a' && e <= 'z') cout << setfill('0') << setw(2) << e - 'a' + 1;
        else if (e >= 'A' && e <= 'Z') cout << setfill('0') << setw(2) << e - 'A' + 27;
        else if (e >= '0' && e <= '9') cout << '#' << e;
        else cout << e; 
    }
}
