#include <bits/stdc++.h>
using namespace std;
int ans;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  int N, K;
  cin >> N >> K;

  for (int i = 0; i <= N; i++) {
    for (int j = 0; j < 60; j++) {
      for (int k = 0; k < 60; k++) {
        string str = to_string(i) + to_string(j) + to_string(k);
        if (K == 0 && ((i < 11) || (j < 10) || (k < 10))) {
          ans++;
          continue;
        }
        for (auto c : str) {
          if (c - '0' == K) {
            ans++;
            break;
          }
        }
      }
    }
  }
  cout << ans;
}