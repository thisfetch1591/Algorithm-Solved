#include <bits/stdc++.h>
using namespace std;
int n, m, tmp, maxCnt;
vector<int> adj[10002];
int arr[10002];
bool vis[10002];

void dfs(int cur) {
  vis[cur] = true;
  tmp++;
  if (adj[cur].size() == 0) return;
  for (auto c : adj[cur]) {
    if (!vis[c]) {
      dfs(c);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[v].push_back(u);
  }

  for (int i = 1; i <= n; i++) {
    dfs(i);
    arr[i] = tmp;
    maxCnt = max(tmp, maxCnt);
    tmp = 0;
    fill(vis, vis + 10002, false);
  }

  for (int i = 1; i <= n; i++) {
    if (maxCnt == arr[i]) {
      cout << i << ' ';
    }
  }
}