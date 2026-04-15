#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (getline(cin, s)) {
        size_t pos = 0;
        while ((pos = s.find("iiing", pos)) != string::npos)
        {
            s.replace(pos, 5, "th");
            pos += 2;
        }
        cout << s << '\n';
    }
    return 0;
}