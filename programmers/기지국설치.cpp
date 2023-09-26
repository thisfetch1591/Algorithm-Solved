#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
  int ans = 0, st = 1, idx = 0;

  while (st <= n)
  {
    if (st >= stations[idx] - w && st <= stations[idx] + w)
    {
      st = stations[idx] + w;
      idx++;
    }
    else
    {
      st += 2 * w;
      ans++;
    }
    st++;
  }

  return ans;
}