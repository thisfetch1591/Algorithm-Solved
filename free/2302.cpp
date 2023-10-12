#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dp(42);
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  pair<int, int> seat = {0, 0};
  pair<int, int> vipSeat = {0, 1};
  for (int i = 1; i <= 40; i++)
    dp[i] = seat;
  int seatNum, vipNum;
  cin >> seatNum >> vipNum;

  for (int i = 0; i < vipNum; i++)
  {
    int tmp;
    cin >> tmp;
    dp[tmp] = vipSeat;
  }

  for (int i = 1; i <= seatNum; i++)
  {
    if (dp[i].second != 1)
    {
      if (i == 1)
      {
        if (dp[i + 1].second == 1)
          dp[i].first = 1;
        else
          dp[i].first = 2;
      }
      if (i == seatNum)
      {
        if (dp[i - 1].second == 1)
          dp[i].first = dp[i - 1].first + 1;
        else
          dp[i].first = dp[i = 1];
      }
    }
  }
}