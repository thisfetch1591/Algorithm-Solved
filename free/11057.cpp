#include <bits/stdc++.h>
using namespace std;

long long dp[1002][1002];
long long ans;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  for (int i = 0; i < 10; i++)
    dp[1][i] = 1;

  for (int i = 2; i <= n; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      for (int k = 0; k <= j; k++)
      {
        dp[i][j] += dp[i - 1][k];
        dp[i][j] = dp[i][j] % 10007;
      }
    }
  }

  for (int i = 0; i < 10; i++)
    ans += dp[n][i];

  cout << ans % 10007;
}