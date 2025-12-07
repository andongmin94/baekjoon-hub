#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a = 0, b = 5000; cin >> n;
    while (n--)
    {
		int a_, b_; cin >> a_ >> b_;
		a = max(a, a_);
		b = min(b, b_);
    }
    cout << (a * b) % 7 + 1;
}
