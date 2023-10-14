#include <bits/stdc++.h>
using namespace std;
int n, minNum(INT_MAX), ans;
int arr[102];
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  minNum = arr[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    if (minNum <= arr[i])
    {
      ans += arr[i] - minNum + 1;
      minNum--;
    }
    else
    {
      minNum = arr[i];
    }
  }
  cout << ans;
}