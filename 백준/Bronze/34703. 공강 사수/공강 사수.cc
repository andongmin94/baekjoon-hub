#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[5] = {0,};
    int n; cin >> n;
    while(n--)
    {
        int m; cin >> m;
        arr[m - 1]++;
    }
    bool b = true;
    int cnt = 0;
    for (auto e : arr)
    {
        if (e) cnt++;
        if (cnt == 5) b = false;
    }
    if (b) cout << "YES";
    else cout << "NO";
}
