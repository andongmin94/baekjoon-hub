#include <bits/stdc++.h>

using namespace std;

string f(int p, int s)
{
    int i = p - s;
    if (i == 1) return "Birdie.\n";
    if (i == -1) return "Bogey.\n";
    if (i == 2 && s == 1) return "Hole-in-one.\n";
    if (i == 2) return "Eagle.\n";
    if (i == 3) return "Double eagle.\n";
    if (i == 0) return "Par.\n";
    return "Double Bogey.\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int p, s, cnt = 0;
    while (true)
    {
        cnt++;
        cin >> p >> s;
        if (!p && !s) break;
        cout << "Hole #" << cnt << '\n';
        cout << f(p, s) << '\n';
    }
}
