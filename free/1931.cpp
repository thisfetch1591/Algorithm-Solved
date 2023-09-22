#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int, int>> v;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
  if (a.second == b.second)
  {
    return a.first < b.first;
  }
  return a.second < b.second;
}

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x;
    int y;
    cin >> x >> y;
    v.push_back({x, y});
  }

  sort(v.begin(), v.end(), compare);

  for (int i = 0; i < n; i++)
  {
    cout << v[i].first << ' ' << v[i].second << '\n';
  }
}