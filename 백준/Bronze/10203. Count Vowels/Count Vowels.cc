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
        cout << "The number of vowels in ";
        int cnt = 0;
        for (auto e : s)
        {
            if (e == 'a') cnt++;
            if (e == 'e') cnt++;
            if (e == 'i') cnt++;
            if (e == 'o') cnt++;
            if (e == 'u') cnt++;
        }
        cout << s << " is " << cnt << ".\n";
    }
}
