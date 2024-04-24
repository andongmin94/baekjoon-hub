#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c,t,sum = 0; cin >> a >> b >> c >> t;
    t -= 30;
    t = max(t, 0);
    sum += a;
    sum += ceil((double)t / b) * c;
    cout << sum;
}
