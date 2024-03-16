#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;

  string answer = "";

  cin >> s;
  vector<int> delimiter;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '|') {
      delimiter.push_back(1);
      continue;
    }
    if (delimiter.size() == 0 || delimiter.size() == 2) {
      answer += s[i];
    }
  }
  cout << answer << endl;
  return 0;
}