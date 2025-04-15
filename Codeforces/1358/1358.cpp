#include <bits/stdc++.h>
using namespace std;

int numberOfSubstrings(string s) {
  map<char, vector<int>> pos_for_char;
  string valid = "abc";

  for (int i = 0; i < s.size(); i++) {
    pos_for_char[s[i]].push_back(i);
  }

  int answer = 0;

  set<tuple<int, int, int>> substrings;
  for (int i = 0; i < s.size(); i++) {
    auto ita = lower_bound(pos_for_char['a'].begin(), pos_for_char['a'].end(), i);
    auto itb = lower_bound(pos_for_char['b'].begin(), pos_for_char['b'].end(), i);
    auto itc = lower_bound(pos_for_char['c'].begin(), pos_for_char['c'].end(), i);

    if (ita != pos_for_char['a'].end() && itb != pos_for_char['b'].end() && itc != pos_for_char['c'].end()) {
      cout << *ita << " " << *itb << " " << *itc << endl;
      //   substrings.insert(make_tuple(*ita, *itb, *itc));
    }
  }

  return substrings.size();
}
int main() {

  vector<string> test_cases = {
      "abcabc",
      "aaacb",
      "abc",
  };

  for (auto &t : test_cases) {
    cout << numberOfSubstrings(t) << endl;
  }
  return 0;
}