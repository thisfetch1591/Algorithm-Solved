#include <bits/stdc++.h>
using namespace std;
int m, n, ans;
int arr[1000002];
bool isPossible = false;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> m >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  int st = 1;
  int en = arr[n - 1];

  while (st < en)
  {
    int mid = (st + en) / 2;
    int cur = 0;
    for (int i = 0; i < n; i++)
    {
      if (mid <= arr[i])
      {
        cur += arr[i] / mid;
      }
    }

    if (m <= cur)
    {
      isPossible = false;
      st = mid + 1;
    }
    if (m > cur)
    {
      en = mid - 1;
    }
  }

  if (isPossible)
  {
    cout << st;
  }
  else
  {
    cout << 0;
  }
}