#include <bits/stdc++.h>
using namespace std;
string s;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  getline(cin, s);

  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 65 && s[i] < 97) {
      if (s[i] + 13 > 90)
        s[i] = s[i] + 13 - 26;
      else
        s[i] = s[i] + 13;
    } else if (s[i] >= 97 && s[i] <= 122) {
      if (s[i] + 13 > 122)
        s[i] = s[i] + 13 - 26;
      else
        s[i] = s[i] + 13;
    }
  }

  cout << s;
}