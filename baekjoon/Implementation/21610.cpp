#include <bits/stdc++.h>
using namespace std;
int N, M;
int board[52][52];
bool cloud[52][52];
vector<pair<int, int>> cloudCoor;
int dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> N >> M;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) cin >> board[i][j];

  for (int i = N - 2; i < N; i++) {
    for (int j = 0; j < 2; j++) {
      cloud[i][j] = true;
      cloudCoor.push_back({i, j});
    }
  }

  while (M--) {
    int d, s;  // d는 이동할 방향 s는 이동할 거리
    cin >> d >> s;

    int nx = dx[d - 1] * s;
    int ny = dy[d - 1] * s;
    for (int i = 0; i < cloudCoor.size(); i++) {
      pair<int, int> p;
      
    }
    for (auto c : cloudCoor) {
      cout << c.first << ' ' << c.second;
    }
  }
}