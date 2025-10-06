#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    int arr[26] = {0,};
    for (auto e : s)
    {
        arr[e - 'a']++;
    }
    string s_ = "";
    for (auto e : t)
    {
        if (!arr[e - 'a']) s_ += e;
    }
    cout << s_;
}
