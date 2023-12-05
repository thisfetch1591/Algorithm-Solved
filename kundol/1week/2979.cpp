#include <bits/stdc++.h>
using namespace std;
// int tax[4];
// int distanceArr[102];
// int sum;
// vector<pair<int, int>> v;
// int main(void) {
//   ios::sync_with_stdio(0), cin.tie(0);
//   cin >> tax[1] >> tax[2] >> tax[3];

//   for (int i = 0; i < 3; i++) {
//     int x, y;
//     cin >> x >> y;
//     auto p = make_pair(x, y);
//     v.push_back(p);
//   }

//   for (auto c : v) {
//     for (int i = c.first; i < c.second; i++) distanceArr[i]++;
//   }
//   for (int i = 1; i <= 100; i++) {
//     sum += distanceArr[i] * tax[distanceArr[i]];
//   }
//   cout << sum;
// }
int A, B, C, a, b, cnt[104], ret;
int main() {
  cin >> A >> B >> C;
  for (int i = 0; i < 3; i++) {
    cin >> a >> b;
    for (int j = a; j < b; j++) cnt[j]++;
  }
  for (int j = 1; j < 100; j++) {
    if (cnt[j]) {
      if (cnt[j] == 1)
        ret += A;
      else if (cnt[j] == 2)
        ret += B * 2;
      else if (cnt[j] == 3)
        ret += B * 3;
    }
  }

  cout << ret;
}