#include <bits/stdc++.h>
using namespace std;
string str;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> str;
  string tmp = str;
  reverse(str.begin(), str.end());
  if (tmp == str)
    cout << 1 << '\n';
  else
    cout << 0 << '\n';

  return 0;
}