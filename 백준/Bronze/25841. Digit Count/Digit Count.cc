#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int cnt = 0, a, b;
    char c;
    cin >> a >> b >> c;
    
    for (int i = a; i <= b; i++)
    {
        string s = to_string(i);
        for (auto e : s)
        {
            if (e == c) cnt++;
        }
    }
    cout << cnt;
}
