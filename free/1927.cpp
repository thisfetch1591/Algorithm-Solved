#include <bits/stdc++.h>
using namespace std;

struct Comp
{
  bool operator()(const int &a, const int &b) const
  {
    return a > b;
  }
};

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  priority_queue<int, vector<int>, Comp> PQ;

  while (n--)
  {
    int tmp;
    cin >> tmp;
    if (tmp == 0)
    {
      if (PQ.empty())
      {
        cout << '0' << '\n';
      }
      else
      {
        cout << PQ.top() << '\n';
        PQ.pop();
      }
      continue;
    }
    PQ.push(tmp);
  }
}