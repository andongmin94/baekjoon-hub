#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, sum = 0; cin >> a >> b;
    sum += a * 10;
    if (a >= 3) sum += 20;
    if (a == 5) sum += 50;
    if (b > 1000) sum -= 15;
    if (sum < 0) sum = 0;
    cout << sum;
}