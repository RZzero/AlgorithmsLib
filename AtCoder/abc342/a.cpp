#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  vector<vector<int>> freq(26);
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    freq[s[i] - 'a'].push_back(i + 1);
  }

  for (int i = 0; i < 26; i++) {
    if (freq[i].size() == 1) {
      cout << freq[i].back() << endl;
      return 0;
    }
  }
  return 0;
}