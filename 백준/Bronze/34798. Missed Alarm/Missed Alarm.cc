#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    char c;
    cin >> a >> c >> b;

    int a_, b_;
    char c_;
    cin >> a_ >> c_ >> b_;
    
    if (a_ > a)
    {
        cout << "YES";
        return 0;
    }
    if (a_ < a)
    {
        cout << "NO";
        return 0;
    }
    if (b <= b_)
    {
        cout << "YES";
        return 0;
    }
    else cout << "NO";
}
