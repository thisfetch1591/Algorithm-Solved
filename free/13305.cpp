#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  vector<int> station(n), dist(n);
  for (int i = 1; i < n; i++)
    cin >> station[i];
  for (int i = 0; i < n; i++)
    cin >> dist[i];

  long long ans = 0;
  long long cur = dist[0];

  for (int i = 1; i < n; i++)
  {
    ans += cur * dist[i];
    cur = min<long long>(cur, station[i]);
  }

  cout << ans << '\n';
}