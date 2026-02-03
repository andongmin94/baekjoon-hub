#include <bits/stdc++.h>
#define pi 3.14159265359
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    for(int i = 1; i <= k; i++)
    {
        double b, w, r, t= 0;
        cin >> b>> w;
        for(int j = 1; j <= b; j++)
        {
            cin >> r;
            t+= 4.0 / 3.0 * pi * pow(r, 3) / 1000;
        }
        cout << "Data Set " << i << ":\n";
        if(t>= w) cout << "Yes";
        else cout << "No";
        cout << ("\n\n");
    }
}