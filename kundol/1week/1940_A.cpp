#include <bits/stdc++.h>
using namespace std;
int N, M, ans, findRange;
int arr[15004];

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> N >> M;

  for (int i = 0; i < N; i++) cin >> arr[i];

  sort(arr, arr + N);

  for (int i = 0; i < N; i++) {
    int findValue = M - arr[i];
    if (binary_search(arr + i + 1, arr + N, findValue)) ans++;
  }

  cout << ans;
}