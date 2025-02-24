// https://leetcode.com/problems/clear-digits/description/
#include <bits/stdc++.h>
using namespace std;

string clearDigits(string s) {
  string answer = "";
  vector<short> non_digits;
  bitset<100> deleted;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= '0' and s[i] <= '9') {
      if (non_digits.size() > 0) {
        deleted[non_digits.back()] = true;
        non_digits.pop_back();
        deleted[i] = true;
      }
    } else {
      non_digits.push_back(i);
    }
  }

  for (int i = 0; i < s.size(); i++) {
    if (!deleted[i])
      answer += s[i];
  }
  return answer;
}

int main() {
  vector<string> test_cases = {
      "abc",
      "cb34",
      "a8f",
  };

  for (auto &t : test_cases) {
    cout << clearDigits(t) << endl;
  }
  return 0;
}