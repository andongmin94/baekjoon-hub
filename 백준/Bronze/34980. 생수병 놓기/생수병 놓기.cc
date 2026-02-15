#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    string a, b; cin >> a >> b;
    int a_ = 0, b_ = 0;
    
    bool q = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            q = false;
        }
        if (a[i] == 'w') a_++;
        if (b[i] == 'w') b_++;
    }
    if (q)
    {
        cout << "Good"; return 0;
    }
    if (a_ < b_) cout << "Manners maketh man";
    if (a_ == b_) cout << "Its fine";
    if (a_ > b_) cout << "Oryang";
}
