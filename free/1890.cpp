#include <bits/stdc++.h>
using namespace std;
long long arr[102][102];
long long dp[102][102];
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  dp[0][0] = 1;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (dp[i][j] == 0 || (i == n - 1 && j == n - 1) || arr[i][j] == 0)
        continue;
      int tmp = arr[i][j];

      dp[i + tmp][j] += dp[i][j];
      dp[i][j + tmp] += dp[i][j];
    }
  }

  cout << dp[n - 1][n - 1];
}