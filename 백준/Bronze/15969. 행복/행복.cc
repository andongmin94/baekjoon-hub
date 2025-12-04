#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, max_ = 0, min_ = 100000; cin >> n;
    while (n--)
    {
        int x; cin >> x;
        max_ = max(max_, x);
		min_ = min(min_, x);
    }
	cout << max_ - min_;
}