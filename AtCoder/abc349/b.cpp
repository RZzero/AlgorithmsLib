#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  map<char, int> freq;
  map<int, vector<char>> freq_for_letter;
  bool can = true;

  for (auto &s : S) {
    freq[s]++;
  }

  for (auto [letter, cnt] : freq) {
    freq_for_letter[cnt].push_back(letter);
  }

  for (int i = 1; i <= S.size(); i++) {
    if (!(freq_for_letter[i].size() == 0 || freq_for_letter[i].size() == 2))
      can = false;
  }

  cout << (can ? "Yes" : "No") << endl;

  return 0;
}