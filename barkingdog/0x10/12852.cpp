#include <bits/stdc++.h>
using namespace std;
int arr[1000002];
int step[1000002];
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++)
  {
    arr[i] = arr[i - 1] + 1;
    step[i] = i - 1;
    if (i % 2 == 0 && arr[i] > arr[i / 2] + 1)
    {
      arr[i] = arr[i / 2] + 1;
      step[i] = i / 2;
    }
    if (i % 3 == 0 && arr[i] > arr[i / 3] + 1)
    {
      arr[i] = arr[i / 3] + 1;
      step[i] = i / 3;
    }
  }
  cout << arr[n] << '\n';

  int cur = n;
  while (true)
  {
    cout << cur << ' ';
    if (cur == 1)
      break;
    cur = step[cur];
  }
}