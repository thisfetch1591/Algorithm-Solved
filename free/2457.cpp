#include <bits/stdc++.h>
using namespace std;

struct flower
{
  int birthDate, deathDate;
};
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool compare(flower a, flower b)
{
  if (a.deathDate == b.deathDate)
  {
    return a.birthDate < b.birthDate;
  }
  return a.deathDate > b.deathDate;
}

bool compare2(flower a, flower b)
{
  return a.birthDate < b.birthDate;
}

vector<flower> flowers;
int ans = 1;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int bm, bd, dm, dd;
    cin >> bm >> bd >> dm >> dd;
    flower tmp;
    tmp.birthDate = accumulate(month, month + bm, 0) + bd;
    tmp.deathDate = accumulate(month, month + dm, 0) + dd;
    flowers.push_back(tmp);
  }
  sort(flowers.begin(), flowers.end(), compare2);
  if (flowers[0].birthDate > 334)
  {
    cout << 0;
  }
  sort(flowers.begin(), flowers.end(), compare);
  if (flowers[0].deathDate < 60)
  {
    cout << 0;
    return;
  }
  int curBirth = flowers[0].birthDate;
  int curDeath = flowers[0].deathDate;
  for (int i = 1; i < flowers.size(); i++)
  {
    if (curBirth < 60)
      break;
    }
}