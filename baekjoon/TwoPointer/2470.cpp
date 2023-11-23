#include <bits/stdc++.h>
using namespace std;
long long arr[100002];
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + N);
  int st(0), x(0), y(0);
  int en(N - 1);
  long long ans = 0x7ffff;
  while (st < en) {
    long long value = abs(arr[en] + arr[st]);
    if (ans > value) {
      x = arr[st];
      y = arr[en];
      ans = value;
    }
    if (arr[en] + arr[st] == 0) {
      cout << min(arr[st], arr[en]) << ' ' << max(arr[st], arr[en]);
      return 0;
    }
    if (arr[en] + arr[st] > 0) {
      en--;
    } else {
      st++;
    }
  }
  cout << min(x, y) << ' ' << max(x, y);
}