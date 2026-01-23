#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, cnt = 0;
	cin >> a >> b;

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (i + j == 10) cnt++;
		}
	}
	if (cnt == 1) cout << "There is 1 way to get the sum 10.";
    else cout << "There are " << cnt << " ways to get the sum 10.";
}
