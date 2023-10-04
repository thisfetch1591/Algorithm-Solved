#include <bits/stdc++.h>
using namespace std;

int n;
unordered_set<string> s;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string name;
    string stat;

    cin >> name >> stat;

    if (stat == "enter")
      s.insert(name);
    else
      s.erase(name);
  }

  vector<string> ans(s.begin(), s.end());
  sort(ans.begin(), ans.end(), greater<>());
  for (auto c : ans)
    cout << c << '\n';
}