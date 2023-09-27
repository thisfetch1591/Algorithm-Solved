#include <bits/stdc++.h>
using namespace std;

long long solution(int n, vector<int> works)
{
  long long answer = 0;
  priority_queue<int> pq;

  for (int i = 0; i < works.size(); i++)
    pq.push(works[i]);

  while (n > 0)
  {
    if (!pq.empty())
    {
      if (pq.top() != 0)
      {
        int max = pq.top();
        pq.pop();
        pq.push(--max);
      }
      n--;
    }
  }

  while (!pq.empty())
  {
    answer += pq.top() * pq.top();
    pq.pop();
  }
  return answer;
}