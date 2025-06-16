#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[30] = {0,};
    string s; cin >> s;
    
    for (auto e : s)
    {
        arr[e - 'a']++;
    }
    
    bool odd = false, even = false;
    for (auto e : arr)
    {
        if (e)
        {
            if (e % 2) odd = true;
            else even = true;
        }
    }
    if (odd & even) cout << 2;
    else if (odd) cout << 1;
    else cout << 0;
}
