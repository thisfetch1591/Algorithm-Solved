#include <bits/stdc++.h>

using namespace std;

int dp[102][102];
int solution(int m, int n, vector<vector<int>> puddles)
{
  dp[1][2] = dp[2][1] = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if ((i == 1 && j == 2) || (i == 2 && j == 1))
        continue;
      if (i == puddles[i][1] && j == puddles[i][0])
        continue;
      dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    }
  }
  int answer = dp[n][m] % 1000000007;
  return answer;
}
