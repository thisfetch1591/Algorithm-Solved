#include <bits/stdc++.h>
using namespace std;
int n;
int num[13], arr[4];
int maxNum = INT_MIN;
int minNum = INT_MAX;

void func(int m, int result)
{
  // base condition
  if (m == n - 1)
  {
    if (maxNum < result)
      maxNum = result;
    if (minNum > result)
      minNum = result;
    return;
  }

  for (int i = 0; i < 4; i++)
  {
    if (arr[i] > 0)
    {
      arr[i]--;
      if (i == 0)
        func(m + 1, result + num[m + 1]);
      else if (i == 1)
        func(m + 1, result - num[m + 1]);
      else if (i == 2)
        func(m + 1, result * num[m + 1]);
      else
        func(m + 1, result / num[m + 1]);
      arr[i]++;
    }
  }
}

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> num[i];
  for (int i = 0; i < 4; i++)
    cin >> arr[i];

  func(0, num[0]);

  cout << maxNum << '\n'
       << minNum;
}