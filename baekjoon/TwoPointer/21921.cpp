#include <bits/stdc++.h>
using namespace std;
int arr[250002];
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  int X, N;
  cin >> N >> X;

  for (int i = 0; i < N; i++) cin >> arr[i];

  int en = 0;
  long long maxVisit = 0;
  long long total = 0;
  int totalCount = 0;
  for (int st = 0; st < N; st++) {
    while (en < st + X) {
      total += arr[en];
      en++;
    }
    if (maxVisit == total) {
      totalCount++;
    }
    if (maxVisit < total) {
      maxVisit = max(maxVisit, total);
      totalCount = 1;
    }
    total -= arr[st];
    if (en == N) break;
  }
  if (maxVisit == 0) {
    cout << "SAD";
  } else {
    cout << maxVisit << '\n' << totalCount;
  }
}