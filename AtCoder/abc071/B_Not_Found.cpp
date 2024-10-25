#include <bits/stdc++.h>
using namespace std;
string alphabet = "abcdefghijklmnopqrstuvwxyz";

int main() {
  string S;
  cin >> S;

  string answer = "None";
  set<char> contained_s;
  for (auto &c : S)
    contained_s.insert(c);

  for (auto &l : alphabet) {
    if (!contained_s.count(l)) {
      answer = l;
      break;
    }
  }
  cout << answer << endl;
  return 0;
}