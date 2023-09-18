#include <bits/stdc++.h>
using namespace std;
int n;
bool isCom = false;
string str;
bool check(string tmp)
{
  for (int i = 1; i <= tmp.size() / 2; i++)
  {
    if (tmp.substr(tmp.size() - i, i) == tmp.substr(tmp.size() - 2 * i, i))
      return false;
  }
  return true;
}

void func(int k)
{
  if (isCom)
    return;

  if (n == k)
  {
    cout << str;
    isCom = true;
    return;
  }

  for (int i = 1; i <= 3; i++)
  {
    string tmp;
    tmp.push_back('0' + i);
    if (check(tmp))
    {
      str.push_back('0' + i);
      func(k + 1);
    }
    else
      tmp.pop_back();
  }
}
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;
  func(0);
}