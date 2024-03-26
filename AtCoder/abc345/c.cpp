#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  string S;
  cin >> S;

  Long answer = 0;
  map<char, Long> count_so_far;
  map<char, Long> prev_switch_pos;
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  bool extra = 0;
  for (int i = 0; i < S.size(); i++) {
    Long can_switch_pos = 0;
    count_so_far[S[i]]++;

    if (count_so_far[S[i]] > 1)
      extra = 1;

    for (auto &letter : alphabet) {
      if (letter != S[i] && count_so_far.count(letter)) {
        can_switch_pos += count_so_far[letter];
      }
    }

    answer += can_switch_pos - (prev_switch_pos.count(S[i]) && prev_switch_pos[S[i]] > can_switch_pos ? prev_switch_pos[S[i]] : 0);
    prev_switch_pos[S[i]] = can_switch_pos;
  }

  cout << answer + extra << endl;
  return 0;
}