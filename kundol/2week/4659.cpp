#include <bits/stdc++.h>
using namespace std;
string cmd;

char aeiou[5] = {'a', 'e', 'i', 'o', 'u'};
string validity[24] = {"aa", "bb", "cc", "dd", "ff", "gg", "hh", "ii",
                       "jj", "kk", "ll", "mm", "nn", "pp", "qq", "rr",
                       "ss", "tt", "uu", "vv", "ww", "xx", "yy", "zz"};
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> cmd;
  while (cmd != "end") {
    bool isValid = false;
    int mcount = 0;
    int jcount = 0;
    for (int i = 0; i < 5; i++) {
      if (cmd.find(aeiou[i]) != string::npos) {
        isValid = true;
        break;
      }
    }
    for (auto c : cmd) {
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        mcount++;
        jcount = 0;
      } else {
        jcount++;
        mcount = 0;
      }
      if (mcount >= 3 || jcount >= 3) {
        isValid = false;
        break;
      }
    }
    for (int i = 0; i < 24; i++) {
      if (cmd.find(validity[i]) != string::npos) {
        isValid = false;
        break;
      }
    }
    if (isValid)
      cout << '<' << cmd << '>' << " is acceptable.\n";
    else
      cout << '<' << cmd << '>' << " is not acceptable.\n";

    cin >> cmd;
  }
}