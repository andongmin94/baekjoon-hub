#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    stack<int> s;

    for (int x : A)
    {
        s.push(x);

        // 연속된 구간 합이 3이면 제거
        while (true)
        {
            if (s.size() >= 3)
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                int c = s.top();
                s.pop();
                if (a + b + c == 3) continue;

                s.push(a);
                s.push(b);
                s.push(c);
            }

            if (s.size() >= 2)
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if (a + b == 3) continue;

                s.push(a);
                s.push(b);
            }

            break;
        }
    }

    if (s.empty()) cout << "Yes\n";
    else cout << "No\n";
}
