#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[4] = {0,};
    int n;
    string s; cin >> n >> s;
    n = 1;
    for (auto e : s)
    {
        if (e == 'L')
        {
            if (n != 1)
            {
                arr[n-1]++;
                n--;
            }
            else arr[n]++;
        }
        else
        {
            if (n != 3)
            {
                arr[n+1]++;
                n++;
            }
            else arr[n]++;
        }
    }
    cout << arr[3];
}
