#include <bits/stdc++.h>
using namespace std;
int arr[1002];
vector<int> v;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);

  for (int i = 0; i < n; i++)
    for (int j = i; j < n; j++)
      v.push_back(arr[i] + arr[j]);

  sort(v.begin(), v.end());

  for (int i = n - 1; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      if (binary_search(v.begin(), v.end(), arr[i] - arr[j]))
      {
        cout << arr[i];
        return 0;
      }
    }
  }
}