#include <bits/stdc++.h>
using namespace std;
int n;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++) {
    string str;
    cin >> str;
    stack<char> st;
    bool isFlag = true;
    for (auto c : str) {
      if (c == '(') st.push('(');
      if (!st.empty() && c == ')')
        st.pop();
      else if (st.empty() && c == ')')
        isFlag = false;
    }
    if (!isFlag || !st.empty()) cout << "NO\n";
    if (isFlag && st.empty()) cout << "YES\n";
  }
}