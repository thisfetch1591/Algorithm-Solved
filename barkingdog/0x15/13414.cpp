#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b)
{
  return a.second < b.second;
}

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  int k, l;
  cin >> k >> l;
  unordered_map<string, int> signup{};
  for (int i = 0; i < l; i++)
  {
    string studentNum;
    cin >> studentNum;
    if (signup.find(studentNum) != signup.end())
    {
      signup.erase(studentNum);
      signup[studentNum] = i;
    }
    else
      signup[studentNum] = i;
  }

  vector<pair<string, int>> ans(signup.begin(), signup.end());

  sort(ans.begin(), ans.end(), compare);
}