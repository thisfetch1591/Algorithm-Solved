#include <bits/stdc++.h>
using namespace std;
int n, c, temp;
vector<pair<int, int>> v;
map<int, int> mp, mp_sequence;

bool cmp(pair<int, int> a, pair<int, int> b) {
  if (a.first == b.first) {
    return mp_sequence[a.second] < mp_sequence[b.second];
  }
  return a.first > b.first;
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> c;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    mp[temp]++;
    if (mp_sequence[temp] == 0) mp_sequence[temp] = i + 1;
  }
  for (auto c : mp) v.push_back({c.second, c.first});
  sort(v.begin(), v.end(), cmp);

  for (auto c : v) {
    for (int j = 0; j < c.first; j++) {
      cout << c.second << " ";
    }
  }
}