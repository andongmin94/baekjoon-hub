#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, latest = 0; cin >> n;
    string s;
    while(n--)
    {
        string a; int b;
        cin >> a >> b;
        if (latest < b)
        {
            s = a;
            latest = b;
        }
    }
    cout << s;
}
