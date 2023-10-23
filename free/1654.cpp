#include <bits/stdc++.h>
using namespace std;
int arr[1000002];
int k, n;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  cin >> k >> n;

  for (int i = 0; i < k; i++)
    cin >> arr[i];

  long long st = 1;
  long long ed = 0x7fffffff;

  while (st < ed)
  {
    int tmp = 0;
    long long mid = (st + ed + 1) / 2;

    for (int i = 0; i < k; i++)
      tmp += arr[i] / mid;

    if (tmp >= n)
      st = mid;
    if (tmp < n)
      ed = mid - 1;
  }

  cout << st;
}