#include <bits/stdc++.h>
using namespace std;
string classMap[5];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int ans;
int permu[25] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};

bool isConnect(vector<pair<int, int>> v)
{
  int board[5][5];
  bool vis[5][5];

  fill(&board[0][0], &board[4][5], 0);
  fill(&vis[0][0], &vis[4][5], 0);

  for (auto c : v)
    board[c.first][c.second] = 1;

  queue<pair<int, int>> Q;

  vis[v[0].first][v[0].second] = 1;
  Q.push({v[0].first, v[0].second});

  while (!Q.empty())
  {
    auto cur = Q.front();
    Q.pop();

    for (int i = 0; i < 4; i++)
    {
      int nx = cur.first + dx[i];
      int ny = cur.second + dy[i];

      if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5)
        continue;
      if (board[nx][ny] != 1 || vis[nx][ny] == 1)
        continue;
      vis[nx][ny] = 1;
      Q.push({nx, ny});
    }
  }

  for (auto c : v)
    if (!vis[c.first][c.second])
      return false;

  return true;
}
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  for (int i = 0; i < 5; i++)
    cin >> classMap[i];

  do
  {
    vector<pair<int, int>> v;

    for (int i = 0; i < 25; i++)
      if (permu[i] == 1)
        v.push_back({(i / 5), (i % 5)});

    int cnt = 0;
    for (auto c : v)
      if (classMap[c.first][c.second] == 'S')
        cnt++;

    bool status = isConnect(v);

    if (cnt >= 4 && status)
      ans++;

  } while (next_permutation(permu, permu + 25));

  cout << ans;
}