#include <bits/stdc++.h>
using namespace std;
int n;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;
  int i = 666;

  for (;; i++) {
    if (to_string(i).find("666") != string::npos) n--;
    if (n == 0) break;
  }
  cout << i << '\n';
}