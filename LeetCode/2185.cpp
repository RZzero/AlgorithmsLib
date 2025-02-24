#include <bits/stdc++.h>
using namespace std;

int prefixCount(vector<string> &words, string pref) {
  int answer = 0;

  for (auto &word : words) {
    if (word.size() < pref.size())
      continue;

    bool can = true;
    for (int i = 0; i < pref.size(); i++) {
      if (word[i] != pref[i]) {
        can = false;
        break;
      }
    }
    answer += can;
  }
  return answer;
}

int main() {
  vector<pair<vector<string>, string>> test_cases = {
      {{"pay", "attention", "practice", "attend"}, "at"},
      {{"leetcode", "win", "loops", "success"}, "code"},
  };

  for (auto &p : test_cases) {
    int t = prefixCount(p.first, p.second);
    cout << t << endl;
  }
  return 0;
}