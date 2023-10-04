#include <bits/stdc++.h>
using namespace std;
int dp[100002];  // 첫 번째 스티커를 뜯었을 경우
int dp2[100002]; // .. 뜯지 않았을 경우
int solution(vector<int> sticker)
{
  int answer = 0;
  int n = sticker.size();
  dp[0] = sticker[0];
  dp[1] = dp[0];

  if (sticker.size() == 1)
    return sticker[0];

  for (int i = 2; i < n - 1; i++)
  {
    dp[i] = max(dp[i - 1], dp[i - 2] + sticker[i]);
  }
  dp[n - 1] = dp[n - 2];

  int dpMax = *max_element(dp, dp + n);

  dp2[0] = 0;
  dp2[1] = sticker[1];

  for (int i = 2; i < n; i++)
  {
    dp2[i] = max(dp2[i - 1], dp2[i - 2] + sticker[i]);
  }

  int dp2Max = *max_element(dp2, dp2 + n);

  answer = max(dpMax, dp2Max);
  return answer;
}