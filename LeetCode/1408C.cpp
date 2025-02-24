#include <bits/stdc++.h>
using namespace std;

vector<string> stringMatching(vector<string> &words) {
  sort(words.begin(), words.end(), [&](string &a, string &b) -> bool {
    if (a.size() == b.size()) {
      return a < b;
    } else if (a.size() > b.size()) {
      return false;
    }
    return a < b;
  });

  vector<string> answer;
  for (int i = 0; i < words.size(); i++) {
    for (int j = 0; j < words.size(); j++) {
      if (i == j)
        continue;
      if (words[j].find(words[i]) != string::npos) {
        answer.emplace(answer.begin() + answer.size(), words[i]);
        break;
      }
    }
  }
  return answer;
}

int main() {
  vector<vector<string>> test_cases = {
      {"mass", "as", "hero", "superhero"},
      {"leetcode", "et", "code"},
      {"blue", "green", "bu"},
      {"leetcoder", "leetcode", "od", "hamlet", "am"},
      {"jha", "ojjhafb", "kvp", "mmojjhafbde"},
  };

  for (auto &tc : test_cases) {
    vector<string> words = stringMatching(tc);
    for (auto &w : words) {
      cout << w << " ";
    }
    cout << endl;
    cout << endl;
  }
}