// https://onlinejudge.org/external/6/642.pdf
#include <bits/stdc++.h>

using namespace std;

bool are_anagram(string s, string t) {
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  return s == t;
}

int main() {
  string s;
  string centinel = "XXXXXX";
  vector<string> current_dictionary;
  vector<vector<string>> dictionaries;

  while (cin >> s) {
    if (s == "#") break;
    if (s == centinel) {
      dictionaries.push_back(current_dictionary);
      current_dictionary.clear();
    } else {
      current_dictionary.push_back(s);
    }
  }

  for (auto scrambled: dictionaries[1]) {
    bool has_at_least_one = false;
    vector<string> matches;
    for (auto word: dictionaries[0]) {
      if (are_anagram(scrambled, word)) {
        has_at_least_one = true;
        matches.push_back(word);
      }
    }

    // output should be in alphabetical order
    sort(matches.begin(), matches.end());

    for (auto match: matches) {
      cout << match << endl;
    }

    if (!has_at_least_one) {
      cout << "NOT A VALID WORD" << endl;
    }
    cout << "******" << endl;
  }

  return 0;
}
