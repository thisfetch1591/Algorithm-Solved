#include <bits/stdc++.h>
using namespace std;

long long n, m, ans;
priority_queue<long long, vector<long long>, greater<long long>> pq;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    pq.push(tmp);
  }

  for (int i = 0; i < m; i++)
  {
    long long x, y, sum;
    x = pq.top();
    pq.pop();
    y = pq.top();
    pq.pop();
    sum = x + y;

    pq.push(sum);
    pq.push(sum);
  }

  while (!pq.empty())
  {
    ans += pq.top();
    pq.pop();
  }

  cout << ans;
}