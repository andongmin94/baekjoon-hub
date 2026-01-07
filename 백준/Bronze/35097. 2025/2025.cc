#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while(true)
    {
        int n; cin >> n;
        if (!n) break;
        
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                sum += i * j;
            }
        }
        cout << sum << '\n';
    }
}
