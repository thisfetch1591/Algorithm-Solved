#include <bits/stdc++.h>
using namespace std;
int n;
int dp[1002], arr[1002];
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  cin >> n;

  for (int i = 1; i <= n; i++)
    cin >> arr[i];

  dp[1] = arr[1];

  for (int i = 2; i <= n; i++)
  {
    dp[i] = arr[i];
    for (int j = 1; j < i / 2 + 1; j++)
    {
      dp[i] = max(dp[i], dp[i - j] + dp[j]);
    }
  }

  cout << dp[n];
}