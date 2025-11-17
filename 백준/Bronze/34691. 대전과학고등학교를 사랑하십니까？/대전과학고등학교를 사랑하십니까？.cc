#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string s; cin >> s;
        if (s == "end") break;
        if (s == "animal") s = "Panthera tigris";
        if (s == "flower") s = "Forsythia koreana";
        if (s == "tree") s = "Pinus densiflora";
        cout << s << '\n';
    }
}
