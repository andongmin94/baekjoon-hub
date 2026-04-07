#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long sum = 0;
    vector<long long> v1(3), v2(3);
    cin >> v1[0] >> v1[1] >> v1[2] >> v2[0] >> v2[1] >> v2[2];;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sum = v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
    cout << sum;
}
