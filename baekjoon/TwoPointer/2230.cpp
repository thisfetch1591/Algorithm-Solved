#include <bits/stdc++.h>
using namespace std;
int arr[100002];
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  int st, en = 0;
  int minNum = INT_MAX;
  for (int i = 0; i < n; i++) {
    st = i;
    while (arr[en] - arr[st] < m) {
      if (en == n - 1) break;
      en++;
    }
    if (arr[en] - arr[st] >= m) minNum = min(minNum, arr[en] - arr[st]);
  }
  cout << minNum;
}