#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr1[1000002];
int arr2[1000002];
int arr3[2000004];

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m;

  for (int i = 0; i < n; i++) cin >> arr1[i];
  for (int i = 0; i < m; i++) cin >> arr2[i];
  int cur1 = 0;
  int cur2 = 0;
  for (int cur3 = 0; cur3 < n + m; cur3++) {
    while (cur1 < n && cur2 < m) {
      if (arr1[cur1] > arr2[cur2]) {
        arr3[cur3] = arr2[cur2];
        cur3++;
        cur2++;
      }
      if (arr1[cur1] < arr2[cur2]) {
        arr3[cur3] = arr1[cur1];
        cur3++;
        cur1++;
      }
      if (arr1[cur1] == arr2[cur2]) {
        arr3[cur3++] = arr1[cur1];
        arr3[cur3++] = arr2[cur2];
        cur1++;
        cur2++;
      }
    }
    if (cur1 == n) {
      arr3[cur3] = arr2[cur2];
      cur2++;
      continue;
    }
    if (cur2 == m) {
      arr3[cur3] = arr1[cur1];
      cur1++;
    }
  }

  for (int i = 0; i < n + m; i++) {
    cout << arr3[i] << ' ';
  }
}