#include <bits/stdc++.h>
using namespace std;
int n, tmp;
vector<int> v, ans;
int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    v.push_back(tmp);
  }

  reverse(v.begin(), v.end());
  stack<int> st;
  for (auto c : v) {
    if (st.empty()) {
      ans.push_back(-1);
      st.push(c);
    } else {
      if (st.top() > c) {
        ans.push_back(st.top());
        st.push(c);
      } else {
        while (!st.empty() && st.top() <= c) {
          st.pop();
        }
        if (st.empty()) {
          ans.push_back(-1);
          st.push(c);
        } else {
          ans.push_back(st.top());
          st.push(c);
        }
      }
    }
  }
  reverse(ans.begin(), ans.end());
  for (auto c : ans) {
    cout << c << ' ';
  }
}