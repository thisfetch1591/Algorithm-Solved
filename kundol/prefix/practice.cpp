#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100004], b, c, psum[100004], n, m;
int main() {
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    psum[i] = psum[i - 1] + a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b >> c;
    cout << psum[c] - psum[b - 1] << '\n';
  }
  return 0;
}