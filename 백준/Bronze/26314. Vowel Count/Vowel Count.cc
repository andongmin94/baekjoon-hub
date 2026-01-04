#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    while(n--)
    {
        string s; cin >> s;
        int odd = 0, even = 0;
        for (auto e : s)
        {
            if (e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u') even++;
            else odd++;
        }
        cout << s << '\n' << (even > odd ? 1 : 0) << '\n';
    }
}
