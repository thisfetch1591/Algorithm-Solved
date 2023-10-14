#include <bits/stdc++.h>
using namespace std;
int dp[42];
int n, ans(1), seat;
vector<int> v;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= 40; i++)
    dp[i] = dp[i - 1] + dp[i - 2];

  cin >> seat >> n;

  int cur = 1;

  for (int i = 0; i < n; i++)
  {
    int vipSeatNum;
    cin >> vipSeatNum;

    ans *= dp[vipSeatNum - cur];
    cur = vipSeatNum + 1;
  }

  ans *= dp[seat - cur + 1];

  cout << ans;
}