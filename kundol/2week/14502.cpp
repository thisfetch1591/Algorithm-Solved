#include <bits/stdc++.h>
using namespace std;
int arr[10][10];
bool vis[10][10];
int n, m, ret;
vector<pair<int, int>> virustList, wallList;
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

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
            }
    }
  }
}