#include <bits/stdc++.h>
using namespace std;
int ans;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  while (n > 0)
  {
    if (n >= 10)
    {
      n = n - 5;
      ans++;
      continue;
    }

    if (n % 2 == 0)
      n = n - 2;
    else
      n = n - 5;
    ans++;

    if (n < 0)
    {
      cout << -1;
      return 0;
    }
  }

  cout << ans;
}