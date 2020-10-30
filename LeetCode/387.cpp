#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> occur(26, 0);
  string s = "leetcode";

  for (auto &letter: s) {
    occur[letter-'a']++;
  }

  for (int i = 0; i < s.size(); i++) {
    if (occur[s[i]-'a'] == 1) {
      cout << i << endl;
    }
  }
  cout << -1 << endl;
  return 0;
}
