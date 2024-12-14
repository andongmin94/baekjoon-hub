#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    while (N--) {
        int a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        if (a + b == c) ok = true;
        if (a - b == c) ok = true;
        if (b - a == c) ok = true;
        if (a * b == c) ok = true;
        if (b != 0 && a % b == 0 && a / b == c) ok = true;
        if (a != 0 && b % a == 0 && b / a == c) ok = true;

        cout << (ok ? "Possible" : "Impossible") << "\n";
    }
}
