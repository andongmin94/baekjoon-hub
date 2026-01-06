#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    
    // 시계순과 역시계순으로 움직이는 횟수 계산
    int case1 = m - n;
    int case2 = n - m;
    
    if(m > n) case2 += 360;
    else case1 += 360;
    
    
    // 최단 거리로 움직일 때 위치 변화 출력
    if(case1 <= case2) cout << case1;
    else cout << case2 * -1;
}
