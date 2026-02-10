#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "";
    s += "SciComLove";
    deque<char> d;
    for (auto e : s) d.push_back(e);

    int n; cin >> n;
    while (n--)
    {
		char c = d.front();
		d.pop_front();
		d.push_back(c);
    }

	for (auto e : d) cout << e;
}
