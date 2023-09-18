#include <bits/stdc++.h>
using namespace std;
int arr[15];

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  while (n >= 1)
  {
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    int tmp[15];

    for (int i = 0; i < 6; i++)
      tmp[i] = 0;
    for (int i = 6; i < n; i++)
      tmp[i] = 1;

    do
    {
      for (int i = 0; i < n; i++)
      {
        if (tmp[i] == 0)
          cout << arr[i] << ' ';
      }
      cout << '\n';
    } while (next_permutation(tmp, tmp + n));
    cout << '\n';
    cin >> n;
  }
}