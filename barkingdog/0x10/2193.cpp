#include <bits/stdc++.h>
using namespace std;
long long dp[92][2];
int n;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;

  dp[1][1] = 1LL;

  for (int i = 2; i <= n; i++)
  {
    dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
    dp[i][1] = dp[i - 1][0];
  }

  cout << dp[n][0] + dp[n][1];
}