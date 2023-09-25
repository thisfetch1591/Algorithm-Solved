#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  while (n--)
  {
    int tmp;
    cin >> tmp;
    priority_queue<ll, vector<ll>, greater<>> PQ;
    ll ans = 0;
    for (int i = 0; i < tmp; i++)
    {
      int num;
      cin >> num;
      PQ.push(num);
    }

    while (PQ.size() > 1)
    {
      ll a = PQ.top();
      PQ.pop();
      ll b = PQ.top();
      PQ.pop();

      auto c = a + b;

      PQ.push(c);

      ans += c;
    }
    cout << ans << '\n';
  }
}