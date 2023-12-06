#include <bits/stdc++.h>
using namespace std;
int tc, n;
string a, b;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> tc;
  while (tc--) {
    map<string, int> _map;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      _map[b]++;
    }
    long long ret = 1;
    for (auto c : _map) {
      ret *= ((long long)c.second + 1);
    }
    cout << ret - 1 << '\n';
  }
}