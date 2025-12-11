#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();

    int arr[26] = { 0, };
    string s;
    cin >> s;
    for (auto e : s)
    {
        arr[e - 'a']++;
    }
    bool a = false, b = false;
    for (auto e : arr)
    {
        if (e != 0 && e % 2) a = true;
        if (e != 0 && e % 2 == 0) b = true;
    }
    if (a && b) cout << "0/1";
    else if (a) cout << 1;
    else cout << 0;
}
