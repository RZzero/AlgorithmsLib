#include <bits/stdc++.h>

using namespace std;

int main() {
  string J = "aA", S = "aAAbbbb";

  set<char> seto;
  for (auto &c: J) {
    seto.insert(c);
  }
  int answer = 0;
  for (auto &c: S) {
    if (seto.count(c)) answer++;
  }
  cout << answer << endl;
  return 0;
}