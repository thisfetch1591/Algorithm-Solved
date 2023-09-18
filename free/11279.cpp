#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  priority_queue<int> PQ;

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