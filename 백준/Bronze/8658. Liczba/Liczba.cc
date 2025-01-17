#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin >> n;
    
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            cout << i << ' ';
            break;
        }
    }
	cout << n - 1;
}
