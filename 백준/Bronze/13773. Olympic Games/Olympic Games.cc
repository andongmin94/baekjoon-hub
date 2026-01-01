#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

        cout << n;
        
        if (n < 1896 || n % 4 != 0) {
            cout << " No summer games";
        }
        else if ((n >= 1914 && n <= 1918) || (n >= 1939 && n <= 1945)) {
            cout << " Games cancelled";
        }
        else if (n > 2020) {
            cout << " No city yet chosen";
        }
        else {
            cout << " Summer Olympics";
        }

        cout << '\n';
    }
}
