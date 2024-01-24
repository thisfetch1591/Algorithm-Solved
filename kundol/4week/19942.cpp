#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 987654321;
int n, mp, mf, ms, mv;
int b, c, d, e, ret = INF, sum;
struct A {
  int mp, mf, ms, mv, cost;
} a[16];

map<int, vector<vector<int>>> ret_v;

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> n;
  cin >> mp >> mf >> ms >> mv;
  for (int i = 0; i < n; i++)
    cin >> a
}