#include <bits/stdc++.h>
using namespace std;
int N, L, R, ans;
int board[52][52];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> N >> L >> R;

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) cin >> board[i][j];
  bool isContinue = false;
  do {
    isContinue = false;
    bool vis[N][N];
    bool curVis[N][N];
    queue<pair<int, int>> Q;
    for (int x = 0; x < N; x++) memset(vis[x], false, sizeof(bool) * N);
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (!vis[i][j]) {
          for (int x = 0; x < N; x++)
            memset(curVis[x], false, sizeof(bool) * N);
          int total = board[i][j];
          int cnt = 1;
          vis[i][j] = true;
          curVis[i][j] = true;
          Q.push({i, j});
          vector<pair<int, int>> v;
          v.push_back({i, j});
          while (!Q.empty()) {
            auto cur = Q.front();
            Q.pop();
            for (int dir = 0; dir < 4; dir++) {
              int nx = cur.first + dx[dir];
              int ny = cur.second + dy[dir];
              if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
              if (abs(board[cur.first][cur.second] - board[nx][ny]) < L ||
                  abs(board[cur.first][cur.second] - board[nx][ny]) > R)
                continue;
              if (curVis[nx][ny]) continue;
              if (vis[nx][ny]) continue;
              Q.push({nx, ny});
              isContinue = true;
              total += board[nx][ny];
              cnt++;
              vis[nx][ny] = true;
              curVis[nx][ny] = true;
              v.push_back({nx, ny});
            }
          }
          int resultTotal = total / cnt;
          for (auto c : v) {
            board[c.first][c.second] = resultTotal;
          }
        }
      }
    }
    if (isContinue) {
      ans++;
    }
  } while (isContinue);
  cout << ans;
}