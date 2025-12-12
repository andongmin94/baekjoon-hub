#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s; cin >> s;
    int cnt = 0;
    cnt += (s[0] - '0') * 2;
    cnt += (s[1] - '0') * 7;
    cnt += (s[2] - '0') * 6;
    cnt += (s[3] - '0') * 5;
    cnt += (s[4] - '0') * 4;
    cnt += (s[5] - '0') * 3;
    cnt += (s[6] - '0') * 2;
    cnt %= 11;
    if (cnt == 0) cout << 'J';
    if (cnt == 1) cout << 'A';
    if (cnt == 2) cout << 'B';
    if (cnt == 3) cout << 'C';
    if (cnt == 4) cout << 'D';
    if (cnt == 5) cout << 'E';
    if (cnt == 6) cout << 'F';
    if (cnt == 7) cout << 'G';
    if (cnt == 8) cout << 'H';
    if (cnt == 9) cout << 'I';
    if (cnt == 10) cout << 'Z';
}
