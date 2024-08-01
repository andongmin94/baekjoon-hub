#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a = 0;
    cin >> n;
    while(n % 2 == 0)
    {
        a++;
        n /= 2;
    }
    cout << n << ' ' << a;
}
