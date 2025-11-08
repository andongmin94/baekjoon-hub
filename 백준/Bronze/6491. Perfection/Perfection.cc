#include <bits/stdc++.h>

using namespace std;

vector<int> f2(int x)
{
    vector<int> div;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0) div.push_back(i);
    }
    return div;
}

string f1(int x)
{
    int sum = 0;
    vector<int> div = f2(x);
    for (auto d : div) sum += d;
    if (sum == x) return "PERFECT\n";
    if (sum < x) return "DEFICIENT\n";
    return "ABUNDANT\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (1)
    {
        int x;
        cin >> x;
        if (!x) break;
        cout << x << ' ' << f1(x);
    }
}
