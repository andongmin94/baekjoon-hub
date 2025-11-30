#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;
    if (n * n <= 100000000) cout << "Accepted";
    else cout << "Time limit exceeded";
}
