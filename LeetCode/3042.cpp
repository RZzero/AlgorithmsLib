#include <bits/stdc++.h>
using namespace std;

int countPrefixSuffixPairs(vector<string> &words) {
  int answer = 0;

  for (int i = 0; i < words.size(); i++) {
    for (int j = 0; j < words.size(); j++) {
      if (i >= j || words[i].size() > words[j].size())
        continue;

      int length_of_j = words[j].size();
      int length_of_i = words[i].size();

      string prefix_j = words[j].substr(0, length_of_i);
      string suffix_j = words[j].substr(length_of_j - length_of_i, length_of_i);

      if (prefix_j == suffix_j && prefix_j == words[i]) {
        answer++;
      }
    }
  }
  return answer;
}

int main() {
  vector<vector<string>> test_cases = {
      {"a", "aba", "ababa", "aa"},
      {"pa", "papa", "ma", "mama"},
      {"abab", "ab"},
  };

  for (auto &t : test_cases) {
    cout << countPrefixSuffixPairs(t) << endl;
  }
  return 0;
}