#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> c(6);
  for (int i = 0; i < 6; i++)
  {
    string s; getline(cin, s);
    if (*(s.end() - 1) == ' ')
      s.pop_back();
    c[i] = s.length();
  }

  cout << "Latitude " << c[0] << ":" << c[1] << ":" << c[2] << "\n";
  cout << "Longitude " << c[3] << ":" << c[4] << ":" << c[5] << "\n";
}