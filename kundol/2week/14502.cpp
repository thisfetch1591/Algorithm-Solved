#include <bits/stdc++.h>
using namespace std;
int arr[10][10];
bool vis[10][10];
int n, m, ret;
vector<pair<int, int>> virustList, wallList;
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

void dfs(int x, int y) {
  for (int dir = 0; dir < 4; dir++) {
    int nx = x + dx[dir];
    int ny = y + dy[dir];
    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
    if (vis[nx][ny] || arr[nx][ny]) continue;
    vis[nx][ny] = 1;
    dfs(nx, ny);
  }
  return;
}

int solve() {
  fill(&vis[0][0], &vis[0][0] + 10 * 10, 0);
  for (auto b : virustList) {
    vis[b.first][b.second] = 1;
    dfs(b.first, b.second);
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 0 && !vis[i][j]) cnt++;
    }
  }
  return cnt;
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 2) virustList.push_back({i, j});
      if (arr[i][j] == 0) wallList.push_back({i, j});
    }
  }

  for (int i = 0; i < wallList.size(); i++) {
    for (int j = 0; j < i; j++) {
      for (int k = 0; k < j; k++) {
        arr[wallList[i].first][wallList[i].second] = 1;
        arr[wallList[j].first][wallList[j].second] = 1;
        arr[wallList[k].first][wallList[k].second] = 1;
        ret = max(ret, solve());
        arr[wallList[i].first][wallList[i].second] = 0;
        arr[wallList[j].first][wallList[j].second] = 0;
        arr[wallList[k].first][wallList[k].second] = 0;
      }
    }
  }
  cout << ret << '\n';
}