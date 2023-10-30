#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr1[100002];
int arr2[100002];
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr1[i];

  cin >> m;
  for (int i = 0; i < m; i++)
    cin >> arr2[i];

  sort(arr1, arr1 + n);
  for (int i = 0; i < m; i++)
  {
    int target = arr2[i];
    int st = 0;
    int en = m - 1;
    bool isFind = false;
    while (st <= en)
    {
      int mid = (st + en) / 2;
      if (arr1[mid] > target)
        en = mid - 1;
      else if (arr1[mid] < target)
        st = mid + 1;
      else
      {
        isFind = true;
        break;
      }
    }
    cout << isFind << '\n';
  }
}