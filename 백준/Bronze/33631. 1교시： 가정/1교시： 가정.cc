#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d; cin >> a >> b >> c >> d;
    int a_, b_, c_, d_; cin >> a_ >> b_ >> c_ >> d_;
    int n, cnt = 0; cin >> n;
    while(n--)
    {
        int q, i; cin >> q >> i;
        if (q == 1)
        {
            if (i * a_ <= a && i * b_ <= b && i * c_ <= c && i * d_ <= d)
            {
                cnt += i;
                cout << cnt;
                a -= a_ * i;
                b -= b_ * i;
                c -= c_ * i;
                d -= d_ * i;
            }
            else cout << "Hello, siumii";
        }
        if (q == 2)
        {
            a += i;
            cout << a;
        }
        if (q == 3)
        {
            b += i;
            cout << b;
        }
        if (q == 4)
        {
            c += i;
            cout << c;
        }
        if (q == 5)
        {
            d += i;
            cout << d;            
        }
        cout << '\n';
    }
}
