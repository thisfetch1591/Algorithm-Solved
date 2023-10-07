#include <bits/stdc++.h>
using namespace std;
string formula;
int ans;

void caculate(bool isMinus, string tmp)
{
  if (isMinus)
  {
    ans -= stoi(tmp);
  }
  else
  {
    ans += stoi(tmp);
  }
}
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> formula;
  bool isMinus = false;
  string tmp = "";

  for (int i = 0; i < formula.size(); i++)
  {
    if (formula[i] != '-' || formula[i] != '+')
    {
      tmp.push_back(formula[i]);
    }
    if (formula[i] == '+')
    {
      caculate(isMinus, tmp);
      tmp.clear();
    }
    if (formula[i] == '-')
    {
      caculate(isMinus, tmp);
      isMinus = true;
      tmp.clear();
    }
    if (i == formula.size() - 1)
    {
      caculate(isMinus, tmp);
    }
  }
  cout << ans;
}