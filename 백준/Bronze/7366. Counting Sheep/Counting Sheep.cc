#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int m, cnt = 0;
        cin >> m;
        while(m--)
        {
            string s; cin >> s;
            if (s == "sheep") cnt++;
        }
        cout << "Case " << i << ": This list contains " << cnt << " sheep.\n\n";
    }
}
