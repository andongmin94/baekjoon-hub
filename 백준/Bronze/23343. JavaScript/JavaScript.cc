#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b; cin >> a >> b;

    bool bb = true;
    for (auto e : a)
    {
        if (!isdigit(e)) bb = false;
        if (!bb) break;
    }
    if (!bb) cout << "NaN";
    if (!bb) return 0;
    for (auto e : b)
    {
        if (!isdigit(e)) bb = false;
        if (!bb) break;
    }
    if (!bb) cout << "NaN";
    if (!bb) return 0;

    cout << stoi(a) - stoi(b);
}
