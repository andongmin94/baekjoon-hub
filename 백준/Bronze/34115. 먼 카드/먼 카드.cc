#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[2000] = {0,};
    
    int n, cnt = 0; cin >> n;
    
    int m = 2 * n;
    vector<int> v;
    while(m--)
    {
        int t; cin >> t;
        v.push_back(t);
    }
    for (int i = 1; i <= n; i++)
    {
        bool b = false;
        int temp = 0;
        for (auto e : v)
        {
            if (b && e != i) temp++;
            else if (b && e == i) b = false;
            else if (e == i) b = true;
        }
        cnt = max(cnt, temp);
    }
    cout << cnt;
}
