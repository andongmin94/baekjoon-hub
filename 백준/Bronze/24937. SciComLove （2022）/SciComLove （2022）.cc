#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s = "SciComLove";
    int n; cin >> n;
    int m = n % s.length();

    for (int i = m; i < s.length(); i++)
        cout << s[i];
    for (int i = 0; i < m; i++)
        cout << s[i];
}
