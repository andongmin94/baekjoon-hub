#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n--)
    {
        int a, b; cin >> a >> b;
        int a_l = a;
        int step_l = 0, step_r = 0;
        while(a_l != b)
        {
            a_l--;
            step_l++;
            if (a_l == 200) a_l = 243;
        }
        while(a != b)
        {
            a++;
            step_r++;
            if (a == 244) a = 201;
        }
        if (step_l < step_r) cout << "Outer circle line\n";
        else if (step_l > step_r) cout << "Inner circle line\n";
        else cout << "Same\n";
    }
}
