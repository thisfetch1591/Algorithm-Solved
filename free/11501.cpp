#include <bits/stdc++.h>
using namespace std;

vector<int> prices;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
      int tmp;
      cin >> tmp;
      prices.push_back(tmp);
    }

    int cur = prices[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
      if (cur > prices[i])
        ans += cur - prices[i];
      else
        cur = prices[i];
    }
    cout << ans << '\n';
    prices.clear();
  }
}