#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int upper = 0, lower = 0;

  cin >> S;

  for (auto &s : S) {
    if (s >= 'a' and s <= 'z') {
      lower++;
    } else {
      upper++;
    }
  }
  string answer = "";
  for (auto &s : S) {
    if (upper > lower) {
      answer += toupper(s);
    } else {
      answer += tolower(s);
    }
  }
  cout << answer << endl;
  return 0;
}