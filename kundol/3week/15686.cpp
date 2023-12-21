#include <bits/stdc++.h>
using namespace std;
int board[52][52];
bool isused[52];
vector<pair<int, int>> chicken, house, seleccion(13);
int n, m, ans(1e6);

int cal() {
  int result = 0;
  for (auto h : house) {
    int val = 10000;
    for (auto c : seleccion) {
      int res = abs(h.first - c.first) + abs(h.second - c.second);
      val = min(res, val);
    }
    result += val;
  }
  return result;
}

void func(int k) {
  if (k == m) {
    ans = min(ans, cal());
    return;
  }

  for (int i = 0; i < chicken.size(); i++) {
    if (!isused[i]) {
      seleccion.push_back(chicken[i]);
      isused[i] = 1;
      func(k + 1);
      seleccion.pop_back();
      isused[i] = 0;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> board[i][j];
      if (board[i][j] == 1) {
        house.push_back({i, j});
      }
      if (board[i][j] == 2) {
        chicken.push_back({i, j});
      }
    }
  }

  func(0);
  cout << ans;
}