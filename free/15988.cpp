#include <bits/stdc++.h>
using namespace std;

long long dp[1000002];
int mod = 1000000009;
vector<int> v;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    v.push_back(n);
  }
  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  for (int i = 4; i <= 1000000; i++)
    dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % mod;

  for (auto c : v)
  {
    cout << dp[c] << '\n';
  }
}