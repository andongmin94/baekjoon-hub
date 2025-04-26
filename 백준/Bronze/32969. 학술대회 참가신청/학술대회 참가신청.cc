#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    vector<string> d = { "social", "history", "language", "literacy" };

    for (auto e : d)
    {
        if (s.find(e) != string::npos)
        {
            cout << "digital humanities";
            return 0;
		}
    }
    cout << "public bigdata";
}
