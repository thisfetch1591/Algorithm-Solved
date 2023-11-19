#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  string N;
  cin >> N;

  for (int i = 1; i < stoi(N); i++) {
    int origin = i;
    for (auto c : to_string(i)) {
      int num = c - 48;
      origin += num;
    }
    if (stoi(N) == origin) {
      cout << i;
      return 0;
    }
  }
  cout << 0;
}