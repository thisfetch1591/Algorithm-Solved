#include <bits/stdc++.h>
using namespace std;
int n, k;
long long arr[300002];
vector<long long> v;
int ans;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    if (i == n - 1) break;
    v.push_back(arr[i + 1] - arr[i]);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < k - 1; i++) {
    ans += v[i];
  }
  cout << ans;
}