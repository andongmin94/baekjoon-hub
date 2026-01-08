#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, sum = 0;
    cin >> n;
    vector<long long> v;
    while (n--)
    {
        long long t; cin >> t;
        v.push_back(t);
    }
    for (long long i = 1; i < v.size(); i++)
    {
        sum += pow(v[i] - v[i - 1], 2);
    }
    cout << sum;
}
