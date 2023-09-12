#include <bits/stdc++.h>
using namespace std;
int arr[10];
bool isused[10];
int n, m;

void func(int k, int cur)
{
  if (m == k)
  {
    for (int i = 0; i < m; i++)
      cout << arr[i] << ' ';
    cout << '\n';
    return;
  }

  for (int i = 1; i <= n; i++)
  {
    if (!isused[i] && cur < i)
    {
      arr[k] = i;
      isused[i] = 1;
      func(k + 1, i);
      isused[i] = 0;
    }
  }
}

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m;
  func(0, 0);
}