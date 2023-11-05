#include <bits/stdc++.h>
using namespace std;
int n, k;
long long arr[300002];
long long ans;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> k;

  int cnt = n / k;

  if (n % k != 0) {
    cnt++;
  }

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    long long minNum = __LONG_LONG_MAX__;
    long long maxNum = 0;
    for (int j = i; j < i + cnt; j++) {
      if (maxNum < arr[j]) {
        maxNum = arr[j];
      }
      if (minNum > arr[j]) {
        minNum = arr[j];
      }

      if (j == n - 1) {
        ans += maxNum - minNum;
        i = n - 1;
        break;
      }

      if (j == i + cnt - 1) {
        ans += maxNum - minNum;
        i = j + 1;
        minNum = __LONG_LONG_MAX__;
        maxNum = 0;
      }
    }
  }

  cout << ans;
}