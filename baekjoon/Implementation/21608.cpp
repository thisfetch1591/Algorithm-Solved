#include <bits/stdc++.h>
using namespace std;
int N;
int studentList[402][6];
int seatList[22][22];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int ans = 0;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> N;

  for (int i = 0; i < N * N; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> studentList[i][j];
    }
  }

  for (int i = 0; i < N * N; i++) {
    int cellX(0);
    int cellY(0);
    int maxSpaceCnt(0);
    int maxLikeCnt(0);
    for (int row = 0; row < N; row++) {
      for (int col = 0; col < N; col++) {
        if (seatList[row][col] == 0) {
          int spaceCnt = 0;
          int likeCnt = 0;
          for (int dir = 0; dir < 4; dir++) {
            int nx = row + dx[dir];
            int ny = col + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
            for (int k = 0; k < 5; k++) {
              if (seatList[nx][ny] == studentList[i][k]) {
                likeCnt++;
                break;
              }
            }
            if (seatList[nx][ny] == 0) spaceCnt++;
          }
          if (maxLikeCnt == likeCnt) {
            if (maxSpaceCnt < spaceCnt) {
              maxSpaceCnt = spaceCnt;
              cellX = row;
              cellY = col;
            }
          }
          if (maxLikeCnt < likeCnt) {
            maxLikeCnt = likeCnt;
            maxSpaceCnt = spaceCnt;
            cellX = row;
            cellY = col;
          }
        }
      }
    }
    if (maxLikeCnt == 0 && maxSpaceCnt == 0) {
      bool isSelected = false;
      for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++) {
          if (seatList[x][y] == 0 && isSelected == false) {
            seatList[x][y] = studentList[i][0];
            isSelected = true;
          }
        }
      }
    } else {
      seatList[cellX][cellY] = studentList[i][0];
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int stuIdx = 0;
      int satis = 0;
      for (int idx = 0; idx < N * N; idx++) {
        if (seatList[i][j] == studentList[idx][0]) {
          stuIdx = idx;
        }
      }
      for (int dir = 0; dir < 4; dir++) {
        int nx = i + dx[dir];
        int ny = j + dy[dir];
        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
        for (int num = 1; num < 5; num++) {
          if (seatList[nx][ny] == studentList[stuIdx][num]) {
            satis++;
          }
        }
      }
      if (satis == 1)
        ans += 1;
      else if (satis == 2)
        ans += 10;
      else if (satis == 3)
        ans += 100;
      else if (satis == 4)
        ans += 1000;
    }
  }
  cout << ans;
}