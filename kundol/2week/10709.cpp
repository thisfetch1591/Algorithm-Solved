#include <bits/stdc++.h>
using namespace std;
int n, m;
int board[102][102];
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char tmp;
      cin >> tmp;
      if (tmp != 'c') board[i][j] = -1;
    }
  }

  for (int i = 0; i < n; i++) {
    bool isStart = false;
    for (int j = 0; j < m; j++) {
      if (board[i][j] == 0) {
        isStart = true;
      }
      if (isStart && board[i][j] != 0) {
        board[i][j] = board[i][j - 1] + 1;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << board[i][j] << ' ';
    }
    cout << '\n';
  }
}