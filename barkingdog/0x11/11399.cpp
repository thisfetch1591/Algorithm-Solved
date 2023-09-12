#include <bits/stdc++.h>
using namespace std;
int n, ans, tmp;
int arr[1002];
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);

  for (int i = 0; i < n; i++)
  {
    ans += arr[i] + tmp;
    tmp += arr[i];
  }
  cout << ans;
}