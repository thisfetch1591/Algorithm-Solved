#include <bits/stdc++.h>
using namespace std;
string board[1002];
int dist[1002][1002][2];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n, m;
  queue<tuple<int, int, int>> Q;
  cin >> n >> m;

  for (int i = 0; i < n; i++)
    cin >> board[i];

  Q.push({0, 0, 0});
  dist[0][0][0] = 1;
  dist[0][0][1] = 1;

  while (!Q.empty())
  {
    auto cur = Q.front();
    Q.pop();

    for (int dir = 0; dir < 4; dir++)
    {
      int nx = get<0>(cur) + dx[dir];
      int ny = get<1>(cur) + dy[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m)
        continue;
      if (board[nx][ny] == '1' && get<2>(cur) == 1)
        continue;
      if (dist[nx][ny][get<2>(cur)] != 0)
        continue;
      if (board[nx][ny] == '1' && get<2>(cur) == 0)
      {
        dist[nx][ny][1] = dist[get<0>(cur)][get<1>(cur)][0] + 1;
        Q.push({nx, ny, 1});
      }
      if (board[nx][ny] == '0' && get<2>(cur) == 1)
      {
        dist[nx][ny][1] = dist[get<0>(cur)][get<1>(cur)][1] + 1;
        Q.push({nx, ny, 1});
      }
      if (board[nx][ny] == '0' && get<2>(cur) == 0)
      {
        dist[nx][ny][0] = dist[get<0>(cur)][get<1>(cur)][0] + 1;
        Q.push({nx, ny, 0});
      }
    }
  }

  if (dist[n - 1][m - 1][0] == 0 && dist[n - 1][m - 1][1] == 0)
  {
    cout << -1;
    return 0;
  }

  if (dist[n - 1][m - 1][0] == 0)
  {
    cout << dist[n - 1][m - 1][1];
    return 0;
  }
  else if (dist[n - 1][m - 1][1] == 0)
  {
    cout << dist[n - 1][m - 1][0];
    return 0;
  }
  else
  {
    cout << min(dist[n - 1][m - 1][0], dist[n - 1][m - 1][1]);
    return 0;
  }
}