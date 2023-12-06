#include <bits/stdc++.h>
using namespace std;
int N, ans;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> N;

  for (int i = 0; i < N; i++) {
    string s;
    stack<char> st;
    cin >> s;

    for (int j = 0; j < s.length(); j++) {
      if (st.empty()) {
        st.push(s[j]);
      } else {
        if (st.top() == s[j])
          st.pop();
        else
          st.push(s[j]);
      }
    }

    if (st.empty()) ans++;
  }

  cout << ans;
}