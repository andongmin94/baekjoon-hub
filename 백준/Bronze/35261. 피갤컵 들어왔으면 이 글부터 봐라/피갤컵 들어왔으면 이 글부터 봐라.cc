#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> N >> S;

    const string target = "eagle";
    int ans = INT_MAX;

    for (int i = 0; i + 5 <= N; i++)
    {
        int diff = 0;
        for (int j = 0; j < 5; j++)
        {
            if (S[i + j] != target[j]) diff++;
        }
        ans = min(ans, diff);
    }

    cout << ans << "\n";
}
