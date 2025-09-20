#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[102] = {0,};
    arr[0] = 2;
    int n; cin >> n;
    n *= 2;
    n--;
    while(n--)
    {
        int t; cin >> t;
        arr[t]++;
    }
    for (int i = 0; i < 102; i++)
    {
        if (arr[i] == 1)
        {
            cout << i;
            break;
        }
    }
}
