#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "1";
  string s2 = "amumu";
  cout << atoi(s.c_str()) << '\n';
  cout << atoi(s2.c_str()) << '\n';

  return 0;
}

// stoi도 있지만 문자열이 아닐 경우 에러를 반환하기 때문에 문자열 판별이 필요할
// 경우 atoi를 사용할 것