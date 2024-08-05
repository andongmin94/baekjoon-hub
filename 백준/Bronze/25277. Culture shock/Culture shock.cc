#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, cnt = 0;
    cin >> n;
    while(n--)
    {
        string s; cin >> s;
        if (s == "he" || s == "she" || s == "him" || s == "her") cnt++;
    }
    cout << cnt;
}
