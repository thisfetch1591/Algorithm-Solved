#include <bits/stdc++.h>
using namespace std;
int N;
string regexStr;
bool vis[102];
vector<string> split(string input, string delimiter) {
  vector<string> ret;
  long long pos = 0;
  string token = "";
  while ((pos = input.find(delimiter)) != string::npos) {
    token = input.substr(0, pos);
    ret.push_back(token);
    input.erase(0, pos + delimiter.length());
  }
  ret.push_back(input);
  return ret;
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> N >> regexStr;

  vector<string> splitRegexStr = split(regexStr, "*");

  for (int i = 0; i < N; i++) {
    bool isPass = true;
    string str;
    cin >> str;
    if (str.length() < regexStr.length() - 1) {
      cout << "NE" << '\n';
      continue;
    }
    for (int idx = 0; idx < splitRegexStr[0].length(); idx++) {
      if (splitRegexStr[0][idx] == str[idx] && !vis[idx]) {
        vis[idx] = true;
      } else {
        isPass = false;
      }
    }
    int splitIndex = splitRegexStr[1].length() - 1;
    for (int idx = str.length() - 1;
         idx >= str.length() - splitRegexStr[1].length(); idx--) {
      if (splitRegexStr[1][splitIndex] == str[idx] && !vis[idx]) {
        vis[idx] = true;
      } else {
        isPass = false;
      }
      splitIndex--;
    }
    if (isPass)
      cout << "DA" << '\n';
    else
      cout << "NE" << '\n';

    memset(vis, 0, sizeof(vis));
  }
}