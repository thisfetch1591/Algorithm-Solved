#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int ans;
void func(int n)
{
  int primeArr[n + 1];

  fill(primeArr, primeArr + n + 1, true);

  for (int i = 2; i * i <= n; i++)
  {
    if (primeArr[i])
    {
      for (int k = i * i; k <= n; k += i)
      {
        primeArr[k] = false;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (primeArr[i])
    {
      v.push_back(i);
    }
  }
}
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  func(n);

  int s = 0, e = 0;
  int sum = 0;
  int ans = 0;
  while (1)
  {
    if (sum > n)
    {
      sum -= v[s];
      s++;
    }
    else if (sum < n)
    {
      if (e >= v.size())
        break;
      sum += v[e];
      e++;
    }
    else
    {
      ans++;
      if (e >= v.size())
        break;
      sum += v[e];
      e++;
    }
  }
  cout << ans;
}