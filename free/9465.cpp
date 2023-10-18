#include <bits/stdc++.h>
using namespace std;
int t;

int dp[100002][2];
int board[100002][2];
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    for (int i = 0; i < 2; i++)
      for (int j = 1; j <= n; j++)
        cin >> board[j][i];

    dp[1][0] = board[1][0];
    dp[1][1] = board[1][1];
    dp[2][0] = dp[1][1] + board[2][0];
    dp[2][1] = dp[1][0] + board[2][1];

    for (int i = 3; i <= n; i++)
    {
      dp[i][0] = max(dp[i - 1][1], dp[i - 2][1]) + board[i][0];
      dp[i][1] = max(dp[i - 1][0], dp[i - 2][0]) + board[i][1];
    }

    cout << max(dp[n][0], dp[n][1]) << '\n';

    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j <= n; j++)
      {
        board[j][i] = 0;
        dp[j][i] = 0;
      }
    }
  }
}