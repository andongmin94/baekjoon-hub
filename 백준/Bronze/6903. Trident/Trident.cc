#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c; cin >> a >> b >> c;
    
    for (int i = 0; i < a; i++)
    {
        cout << '*';
        for (int j = 0; j < b; j++)
            cout << ' ';
        cout << '*';
        for (int j = 0; j < b; j++)
            cout << ' ';
        cout << "*\n";
    }
    for (int i = 0; i < 3 + b * 2; i++)
        cout << '*';
    cout << '\n';
    for (int i = 0; i < c; i++)
    {   
        for (int j = 0; j < b + 1; j++)
            cout << ' ';
        cout << "*\n";
    }
}
