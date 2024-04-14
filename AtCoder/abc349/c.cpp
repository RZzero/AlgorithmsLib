#include <bits/stdc++.h>
using namespace std;

bool is_valid_for_airport_code_overkill(string S, string T) {
  string lowered_T = "";
  for (auto &t : T) {
    lowered_T += tolower(t);
  }

  bool has_x = lowered_T[2] == 'x';
  map<char, vector<int>> positions_for_char;

  for (int i = 0; i < S.size(); i++) {
    positions_for_char[S[i]].push_back(i);
  }

  int first_letter_pos = !positions_for_char[lowered_T[0]].size() ? -1 : positions_for_char[lowered_T[0]][0];

  if (first_letter_pos == -1)
    return false;

  // lowered_T[1]
  if (!positions_for_char[lowered_T[1]].size())
    return false;

  vector<int> positions_for_second = positions_for_char[lowered_T[1]];
  auto second_letter_pos = lower_bound(positions_for_second.begin(), positions_for_second.end(), first_letter_pos + 1);

  if (second_letter_pos == positions_for_second.end()) {
    return false;
  }

  if (has_x) {
    return true;
  }

  vector<int> positions_for_third = positions_for_char[lowered_T[2]];

  auto third_letter_pos = lower_bound(positions_for_third.begin(), positions_for_third.end(), (int)(*second_letter_pos + 1));
  if (third_letter_pos == positions_for_third.end()) {
    return false;
  }
  return true;
}

bool is_valid_for_airport_code_fast_sol(string S, string T) {
  string lowered_T = "";
  for (auto &t : T) {
    lowered_T += tolower(t);
  }
  bool has_x = lowered_T[2] == 'x';
  int cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] == lowered_T[cnt]) {
      cnt++;
    }
  }

  return cnt == 3 || (has_x && cnt == 2);
}

int main() {
  string S, T;
  cin >> S >> T;

  cout << (is_valid_for_airport_code_fast_sol(S, T) ? "Yes" : "No") << endl;
  return 0;
}
/*
aayzx
ZXA
*/