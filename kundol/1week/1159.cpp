#include <bits/stdc++.h>
using namespace std;
int n;
string ans;
int alpha[26];
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    alpha[tmp[0] - 97]++;
  }

  for (int i = 0; i < 26; i++) {
    if (alpha[i] >= 5) ans += i + 97;
  }
  if (!ans.length()) {
    cout << "PREDAJA";
    return 0;
  }
  cout << ans;
}