#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true)
    {
        int n; cin >> n;
        if(!n) break;
        int arr[50] = {0,};
        arr[0] = 1;
        while(n--)
        {
            int t = 6;
            while(t--)
            {
                int m; cin >> m;
                arr[m]++;
            }            
        }
        bool b = true;
        for (auto e : arr)
        {
            if (!e)
            {
                b = false;
                break;
            }
        }
        if (b) cout << "Yes\n";
        else cout << "No\n";
    }
}
