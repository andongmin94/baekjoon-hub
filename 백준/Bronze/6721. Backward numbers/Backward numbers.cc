#include <bits/stdc++.h>

using namespace std;

int f(int num)
{
    string s = to_string(num);
    reverse(s.begin(), s.end());

    return stoi(s);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        int reversedA = f(a);
        int reversedB = f(b);
        int sum = reversedA + reversedB;

        cout << f(sum) << "\n";
    }
}
