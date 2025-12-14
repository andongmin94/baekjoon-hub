#include <bits/stdc++.h>

using namespace std;

int arr[10001] = { 0, };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();

    int a, b; cin >> a >> b;

    vector<int> v;
    while (b--)
    {
        int t; cin >> t;
        v.push_back(t);
    }
    if (v.size() == a) cout << '*';
    else
    {
        for (auto e : v)
        {
            arr[e]--;
        }
        for (int i = 1; i <= a; i++)
        {
            if (arr[i] == 0) cout << i << ' ';
        }
    }
}
