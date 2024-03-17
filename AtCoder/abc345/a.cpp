#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool arrows = false;
  bool inside = true;
  if (s[0] == '<' && s[s.size() - 1] == '>') {
    arrows = true;
  }
  for (int i = 1; i < s.size() - 1; i++) {
    if (s[i] != '=') {
      inside = false;
      break;
    }
  }
  cout << (arrows && inside ? "Yes" : "No") << endl;
  return 0;
}