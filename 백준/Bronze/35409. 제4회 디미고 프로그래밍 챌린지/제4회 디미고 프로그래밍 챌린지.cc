#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    int t = a * 60 + b;
    
    if ((390 <= t && t <= 540) ||    // 06:30-09:00
        (590 <= t && t <= 600) ||    // 09:50-10:00
        (650 <= t && t <= 660) ||    // 10:50-11:00
        (710 <= t && t <= 720) ||    // 11:50-12:00
        (770 <= t && t <= 830) ||    // 12:50-13:50
        (880 <= t && t <= 890) ||    // 14:40-14:50
        (940 <= t && t <= 950) ||    // 15:40-15:50
        (1000 <= t && t <= 1370)) {  // 16:40-22:50
        cout << "Yes";
    } else {
        cout << "No";
    }
}
