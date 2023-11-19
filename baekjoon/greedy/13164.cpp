#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0), cin.tie(0);

  int N, K;
  cin >> N >> K;
  vector<long long int> v(N), cost(N - 1);

  for (int i = 0; i < N; i++) cin >> v[i];

  sort(v.begin(), v.end());

  for (int i = 1; i < N; i++) cost[i - 1] = v[i] - v[i - 1];

  sort(cost.begin(), cost.end());

  long long int ans = 0;
  for (int i = 0; i < N - K; i++) ans += cost[i];

  cout << ans;
}