#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  ios::sync_with_stdio(0), cin.tie(0);

  while (1)
  {
    vector<int> v;
    string a, b;
    int n;
    int zero = 0;
    cin >> n;
    if (n == 0)
      break;
    for (int i = 0; i < n; i++)
    {
      int tmp;
      cin >> tmp;
      v.push_back(tmp);
      if (tmp == 0)
        zero++;
    }
    sort(v.begin(), v.end());

    if (zero == 1)
      swap(v[0], v[2]);

    if (zero > 1)
    {
      swap(v[0], v[zero]);
      swap(v[1], v[zero + 1]);
    }

    for (int i = 0; i < v.size(); i++)
    {
      a.push_back('0' + v[i]);
      i++;
      if (i >= v.size())
        break;
      b.push_back('0' + v[i]);
    }
    cout << stoi(a) + stoi(b) << '\n';
  }
}
