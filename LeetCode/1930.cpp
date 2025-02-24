#include <bits/stdc++.h>
using namespace std;

int countPalindromicSubsequence(string s) {
  map<char, pair<int, int>> indexes;
  map<char, vector<int>> freq;
  for (char c = 'a'; c <= 'z'; c++) {
    indexes[c] = {-1, -1};
    freq[c] = vector<int>();
  }

  int size_of_s = s.size();
  for (int i = 0; i < size_of_s; i++) {
    char c = s[i];
    freq[c].push_back(i);
    if (indexes[c].first == -1) {
      indexes[c].first = i;
    } else {
      indexes[c].second = i;
    }
  }

  int answer = 0;
  for (auto [c, par] : indexes) {
    auto [first, second] = par;
    // cerr << size_of_ocur << endl;
    if (freq[c].size() >= 3) {
      answer++;
    }

    if (freq[c].size() < 2)
      continue;

    for (char cur = 'a'; cur <= 'z'; cur++) {
      if (cur == c || !freq[cur].size() || indexes[cur].first == -1)
        continue;

      auto it = lower_bound(freq[cur].begin(), freq[cur].end(), first);
      if (it == freq[cur].end() || *it > second)
        continue;
      answer += 1;
    }
  }

  return answer;
}
int main() {
  vector<string> testcases = {"aabca", "adc", "bbcbaba"};
  for (int i = 0; i < testcases.size(); i++) {
    cout << countPalindromicSubsequence(testcases[i]) << endl;
  }
}