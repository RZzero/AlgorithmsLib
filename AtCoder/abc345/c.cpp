#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  string s;
  map<char, int> count_so_far;
  string alphabet = "abcdefghijklnmopqrstuvwxyz";

  cin >> s;
  count_so_far[s[0]] = 1;
  set<char> fufua;
  Long cnt = 0;
  for (int i = 1; i < s.size(); i++) {
    int local_cnt = 0;
    int unique = 0;
    fufua.insert(s[i]);
    for (auto &c : alphabet) {
      if (c == s[i] && count_so_far[c] == 1) {
        continue;
      }
      if (count_so_far[c]) {
        unique++;
      }
    }
    local_cnt = i * unique;
    count_so_far[s[i]]++;
    cnt += local_cnt;
  }

  cnt = cnt / 2;
  cout << 1 + (fufua.size() > 1 ? cnt : 0) << endl;
  return 0;
}