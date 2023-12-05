#include <bits/stdc++.h>
using namespace std;
int a[9];
int n = 9, r = 7;
void solve() {
  int sum = 0;
  for (int i = 0; i < r; i++) {
    sum += a[i];
  }
  if (sum == 100) {
    sort(a, a + 7);
    for (int i = 0; i < r; i++) cout << a[i] << '\n';
    exit(0);
  }
}

void print() {
  for (int i = 0; i < r; i++) cout << a[i] << " ";
  cout << '\n';
}

void makePermutation(int n, int r, int depth) {
  if (depth == r) {
    solve();
    return;
  }
  for (int i = depth; i < n; i++) {
    swap(a[i], a[depth]);
    makePermutation(n, r, depth + 1);
    swap(a[i], a[depth]);
  }
}
