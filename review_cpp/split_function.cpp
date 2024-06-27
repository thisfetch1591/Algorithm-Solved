#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string delimiter) {
  vector<string> ret;
  long long pos = 0;
  string token = "";

  while ((pos = input.find(delimiter)) != string::npos) {
    token = input.substr(0, pos);
    ret.push_back(token);
    input.erase(0, pos + delimiter.length());
  }

  ret.push_back(input);

  return ret;
}

int main() {
  string s = "hola soy pedro y estudio espanol y c plus plus";
  vector<string> v = split(s, " ");

  for (string b : v) cout << b << "\n";
}

/*
  vector<string> result;
  auto start = 0;
  auto end = input.find(delimiter);
  while (end != string::npos) {
    result.push_back(input.substr(start, end - start));
    start = end + delimiter.size();
    end = input.find(delimiter, start);
  }
  result.push_back(input.substr(start));
  return result;
*/