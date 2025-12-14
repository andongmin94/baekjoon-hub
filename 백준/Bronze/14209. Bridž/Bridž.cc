#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, cnt = 0; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        int a = 0, k = 0, q = 0, j = 0;
        for (auto e : s)
        {
            if (e == 'A') a++;
            if (e == 'K') k++;
            if (e == 'Q') q++;
            if (e == 'J') j++;
        }
        cnt += a * 4 + k * 3 + q * 2 + j;
    }
    cout << cnt;
}
