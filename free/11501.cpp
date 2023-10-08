#include <bits/stdc++.h>
using namespace std;

vector<int> price;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> price[i];
    }

    // int max = price[n - 1];
    // for (int i = n - 2; i >= 0; --i)
    // {
    //   if (price[i] > max)
    //     max = price[i];
    //   ans += max - price[i];
    // }
    // cout << ans << '\n';
    // price.clear();
  }
}