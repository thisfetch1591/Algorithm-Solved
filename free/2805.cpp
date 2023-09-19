#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll n, k, arr[1000002];

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> k;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);
  ll s = 0;
  ll e = arr[n - 1];

  ll ans = -1;
  while (s <= e)
  {
    ll total = 0;
    ll mid = (s + e) / 2;

    for (int i = 0; i < n; i++)
    {
      if (arr[i] - mid > 0)
        total += arr[i] - mid;
    }

    if (total >= k)
    {
      s = mid + 1;
      if (mid > ans)
        ans = mid;
    }
    else
    {
      e = mid - 1;
    }
  }
  cout << ans;
}