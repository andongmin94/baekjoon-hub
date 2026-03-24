#include <iostream>

using namespace std;

int main() {
    int a[4][4];
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];
    }

    int target = 0;
    for (int j = 0; j < 4; j++)
        target += a[0][j];

    for (int i = 0; i < 4; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < 4; j++)
            rowSum += a[i][j];
        if (rowSum != target)
        {
            cout << "not magic";
            return 0;
        }
    }

    for (int j = 0; j < 4; j++)
    {
        int colSum = 0;
        for (int i = 0; i < 4; i++)
            colSum += a[i][j];
        if (colSum != target)
        {
            cout << "not magic";
            return 0;
        }
    }

    cout << "magic";
}