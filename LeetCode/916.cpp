#include <bits/stdc++.h>
using namespace std;

vector<string> wordSubsets(vector<string> &words1, vector<string> &words2) {
  vector<int> max_char_frequency(26, 0);
  vector<string> answer;

  for (auto &word : words2) {
    vector<int> word_freq(26, 0);
    for (auto &c : word) {
      word_freq[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
      max_char_frequency[i] = max(max_char_frequency[i], word_freq[i]);
    }
  }

  for (auto &word1 : words1) {

    vector<int> freq(26, 0);
    for (auto &c : word1) {
      freq[c - 'a']++;
    }
    bool can = true;

    for (int i = 0; i < 26; i++) {
      if (max_char_frequency[i] == 0)
        continue;
      if (freq[i] < max_char_frequency[i]) {
        can = false;
        break;
      }
    }

    if (can) {
      answer.push_back(word1);
    }
  }
  return answer;
}

int main() {
  vector<pair<vector<string>, vector<string>>> test_cases = {
      {{"amazon", "apple", "facebook", "google", "leetcode"}, {"e", "o"}},
      {{"amazon", "apple", "facebook", "google", "leetcode"}, {"l", "e"}},
      {{"abbac", "ccbcc", "abbbb", "babca", "accab"}, {"c", "c", "c"}},
  };

  for (auto &p : test_cases) {
    vector<string> t = wordSubsets(p.first, p.second);

    for (auto &w : t) {
      cout << w << " ";
    }
    cout << endl;
  }
  return 0;
}