#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1002];
bool vis1[1002];
bool vis2[1002];
int n, m, v;

void bfs()
{
  vis1[v] = true;
  queue<int> Q;
  Q.push(v);
  while (!Q.empty())
  {
    auto cur = Q.front();
    cout << cur << ' ';
    Q.pop();
    for (auto nxt : adj[cur])
    {
      if (vis1[nxt])
        continue;
      Q.push(nxt);
      vis1[nxt] = true;
    }
  }
}

void dfs(int cur)
{
  vis2[cur] = true;
  cout << cur << ' ';
  for (auto nxt : adj[cur])
  {
    if (vis2[nxt])
      continue;
    dfs(nxt);
  }
}

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m >> v;

  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for (int i = 1; i <= n; i++)
  {
    sort(adj[i].begin(), adj[i].end());
  }
  dfs(v);
  cout << '\n';
  bfs();
}