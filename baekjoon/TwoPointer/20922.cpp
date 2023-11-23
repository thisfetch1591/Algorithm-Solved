#include <bits/stdc++.h>
using namespace std;

int arr[200002];
int countArr[100002];
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  int N, K;
  cin >> N >> K;

  for (int i = 0; i < N; i++) cin >> arr[i];

  int st = 0;
  int en = 0;
  int ans = 0;
  int cur = 0;
  while (en < N) {
    countArr[arr[en]]++;
    if (countArr[arr[en]] > K) {
      while (countArr[arr[en]] > K && st < en) {
        countArr[arr[st]]--;
        st++;
        cur--;
      }
    }
    cur++;
    ans = max(cur, ans);
    en++;
  }
  cout << ans;
}