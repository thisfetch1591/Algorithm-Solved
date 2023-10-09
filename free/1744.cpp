#include <bits/stdc++.h>
using namespace std;

deque<long long> numbers;
long long ans;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int tmp;
    cin >> tmp;
    numbers.push_back(tmp);
  }

  sort(numbers.begin(), numbers.end(), greater<>());

  while (true)
  {
    if (numbers[0] <= 1)
      break;
    if (numbers.size() < 2)
      break;

    long long firstNum = numbers[0];
    long long secondNum = numbers[1];

    if (numbers[1] == 1)
      ans += firstNum + secondNum;
    else
      ans += firstNum * secondNum;
    numbers.pop_front();
    numbers.pop_front();
  }

  if (numbers.size() > 1)
    sort(numbers.begin(), numbers.end());

  while (numbers.size() > 1)
  {
    long long firstNum = numbers[0];
    long long secondNum = numbers[1];

    if ((firstNum < 0 && secondNum < 0) || (firstNum < 0 && secondNum == 0))
      ans += firstNum * secondNum;
    if (secondNum == 1)
      ans += firstNum + secondNum;
    numbers.pop_front();
    numbers.pop_front();
  }

  if (numbers.size() == 1)
  {
    ans += numbers.front();
  }

  cout << ans;
}