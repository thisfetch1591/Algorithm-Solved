#include <bits/stdc++.h>
using namespace std;
string cmd;
int alpha[27];
char pelin[52];
bool isCheck[27];
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> cmd;

  for (auto c : cmd) alpha[c - 'A']++;

  for (int i = 0; i < cmd.length() / 2; i++) {
    for (int j = 0; j < 27; j++) {
      if (alpha[j] == 0) continue;
      if (alpha[j] > 1) {
        isCheck[j] = true;
        pelin[i] = j + 'A';
        pelin[cmd.length() - 1 - i] = j + 'A';
        alpha[j] -= 2;
        break;
      }
      if (!isCheck[j] && alpha[j] == 1) {
        cout << "I'm Sorry Hansoo";
        return 0;
      }
    }
  }

  for (int i = 0; i < 27; i++) {
    if (alpha[i] == 1) {
      for (int j = 0; j < cmd.length(); j++) {
        if (pelin[j] == 0) {
          pelin[j] = i + 'A';
        }
      }
    }
  }
  for (int i = 0; i < cmd.length(); i++) cout << pelin[i];
}