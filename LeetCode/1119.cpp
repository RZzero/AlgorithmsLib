#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "leetcodeisacommunityforcoders";
  string answer = "";
  set<int> vowels = { 'a', 'e', 'i', 'o', 'u' };

  for (auto &c: s) {
    if (vowels.count(c)) continue;
    answer += c;
  }
  cout << answer << endl;
  return 0;
}