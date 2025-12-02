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
        if (s == "yonsei")
        {
            cout << "Yonsei Won!";
            break;
        }
        if (s == "korea")
        {
            cout << "Yonsei Lost...";
            break;
        }
    }
}
