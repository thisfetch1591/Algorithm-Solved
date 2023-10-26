#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
int arr[102][10002];

bool compare(int a[], int b[])
{
  for (int k = 0; k < n; k++)
    if (a[k] != b[k])
      return false;
  return true;
}

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> m >> n;

  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  for (int i = 0; i < m; i++)
  {
    vector<int> v;
    for (int j = 0; j < n; j++)
    {
      v.push_back(arr[i][j]);
    }
    sort(v.begin(), v.end());
    unique(v.begin(), v.end());

    for (int j = 0; j < n; j++)
    {
      arr[i][j] = lower_bound(v.begin(), v.end(), arr[i][j]) - v.begin();
    }
  }

  for (int i = 0; i < m - 1; i++)
  {
    for (int j = i + 1; j < m; j++)
    {
      ans += compare(arr[i], arr[j]);
    }
  }

  cout << ans;
}