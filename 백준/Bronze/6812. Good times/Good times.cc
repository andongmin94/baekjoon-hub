#include <bits/stdc++.h>

using namespace std;

int convertTime(int totalMinutes) {
    const int DAY = 24 * 60;
    totalMinutes = (totalMinutes % DAY + DAY) % DAY;  // 음수 보정

    int h = totalMinutes / 60;
    int m = totalMinutes % 60;

    return h * 100 + m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    cin >> s;

    while (s.size() < 4) s = '0' + s;  // 13 -> 0013

    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(2, 2));

    int base = a * 60 + b;

    cout << convertTime(base) << " in Ottawa\n";
    cout << convertTime(base - 180) << " in Victoria\n";
    cout << convertTime(base - 120) << " in Edmonton\n";
    cout << convertTime(base - 60) << " in Winnipeg\n";
    cout << convertTime(base) << " in Toronto\n";
    cout << convertTime(base + 60) << " in Halifax\n";
    cout << convertTime(base + 90) << " in St. John's\n";
}