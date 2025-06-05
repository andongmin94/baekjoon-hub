#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long S, C, O, N;
    cin >> S >> C >> O >> N;

    long long s = (S + N) / 3;
    long long c = (C + 2 * O) / 6;

    cout << min(s, c);
}
