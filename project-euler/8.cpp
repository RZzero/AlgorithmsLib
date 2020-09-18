// https://projecteuler.net/problem=8
#include <iostream>
#include <cstdio>

using namespace std;
typedef long long Long;

int main() {
  freopen("8.txt", "r", stdin);

  string cur, s = "";
  while (cin >> cur) {
    for (auto ch: cur) {
      if (ch >= '0' && ch <= '9')
        s += ch;
    }
  }
  
  Long answer = 0;
  for (int i = 0; i < s.size(); i++) {
    Long current_multiplication = 1;
    for (int j = i+1; j < s.size() && j <= i+13; j++) {
      current_multiplication *= (int)s[j]-'0';
    }
    answer = max(answer, current_multiplication);
  }

  cout << answer << endl;
  return 0;
}
