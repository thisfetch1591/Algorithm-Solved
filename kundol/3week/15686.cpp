#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int board[52][52];
bool isSelect[2502];
vector<pair<int, int>> chicken_list;
vector<pair<int, int>> house_list;

void func(int k, vector<pair<int, int>> chicken_temp_list) {
  if (k == m) {
    for (int i = 0; i < house_list.size(); i++) {
      int a =
    }
  }
  for (int i = 0; i < chicken_list.size(); i++) {
    f
  }
}
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int tmp;
      cin >> tmp;
      board[i][j] = tmp;
      if (tmp == 1) house_list.push_back({i, j});
      if (tmp == 2) chicken_list.push_back({i, j});
    }
  }

  for (int i = 0; i < m; i++) {
  }
}