#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; string s; cin >> n >> s;
    string s_ = "";
    for (int i = 0; i < n / 2; i++)
    {
        s_ += s[i];
    }
    
    if (s_ + s_ == s) cout << "Yes";
    else cout << "No";
}
