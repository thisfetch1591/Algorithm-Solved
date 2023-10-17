#include <bits/stdc++.h>
#define s first
#define e second
using namespace std;

vector<pair<int, int>> v;
priority_queue<int, vector<int>, greater<int>> pq;

int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int startTime, endTime;
    cin >> startTime >> endTime;

    v.push_back({startTime, endTime});
  }

  sort(v.begin(), v.end());

  pq.push(v[0].e);

  for (int i = 1; i < v.size(); i++)
  {
    pq.push(v[i].e);

    if (v[i].s >= pq.top())
      pq.pop();
  }

  cout << pq.size();
}