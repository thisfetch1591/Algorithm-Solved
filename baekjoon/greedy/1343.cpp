#include <bits/stdc++.h>
using namespace std;
string board;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> board;
  int aCount = 0;
  int bCount = 0;
  for (int i = 0; i < board.length(); i++) {
    if (board[i] == '.') continue;
    bool isA = true;
    bool isB = true;
    if (i + 3 >= board.length()) isA = false;
    for (int j = i; j < i + 4; j++) {
      if (board[j] == '.') isA = false;
    }
    if (isA) {
      for (int j = i; j < i + 4; j++) {
        board[j] = 'A';
      }
      i += 3;
      continue;
    }
    if (i + 1 >= board.length()) isB = false;
    for (int j = i; j < i + 2; j++) {
      if (board[j] == '.') {
        isB = false;
      }
    }
    if (isB) {
      for (int j = i; j < i + 2; j++) {
        board[j] = 'B';
      }
      i += 1;
      continue;
    }
    if (isB == false) {
      cout << -1;
      return 0;
    }
  }
  cout << board;
}