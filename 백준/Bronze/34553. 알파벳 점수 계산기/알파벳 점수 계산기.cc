#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    int score = 1;
    int cnt = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] > s[i-1]) cnt++;
        else cnt = 1;
        score += cnt;
    }
    
    cout << score;
}
