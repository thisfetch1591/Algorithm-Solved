#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
vector<int> a;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < m; i++)
  {
    int tmp;
    cin >> tmp;
    auto it = lower_bound(a.begin(), a.end(), tmp);
    if (it == a.end() || *it != tmp)
    {
      ans++;
      continue;
    }
    else
    {
      int idx = distance(a.begin(), it);
      a.erase(a.begin() + idx);
    }
  }

  cout << ans << '\n';

  for (int i = 0; i < a.size(); i++)
    cout << a[i] << ' ';
}