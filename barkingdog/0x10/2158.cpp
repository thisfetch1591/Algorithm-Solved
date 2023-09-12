#include <bits/stdc++.h>
using namespace std;
int arr[10002];
int dp[10002][3]; // 0은 처음 먹었을 때 1은 연속으로 먹었을 때

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  dp[0][0] = arr[0];
  dp[1][0] = arr[1];
  dp[1][1] = arr[0] + arr[1];

  for (int i = 2; i < n; i++)
  {
    dp[i][0] = max(dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]) + arr[i];
    dp[i][1] = dp[i - 1][0] + arr[i];
    dp[i][2] = dp[i - 1][1] + arr[i];
  }
1
  cout << max(dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]);
}