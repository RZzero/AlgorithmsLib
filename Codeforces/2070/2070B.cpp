#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N, X, K;
  cin >> N >> X >> K;

  string S;
  cin >> S;

  Long steps_for_break_point = 0;
  bool can_from_neutral = 0;
  Long got_to_zero = 0;
  Long steps_from_neutral = 0;

  Long found = 0;
  Long left_steps = 0;
  Long right_steps = 0;

  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'L') {
      got_to_zero--;
      left_steps++;
    } else {
      got_to_zero++;
      right_steps++;
    }

    if (!can_from_neutral && got_to_zero == 0) {
      can_from_neutral = true;
      steps_from_neutral = i + 1;
    }
  }

  if ((X >= 0 && !left_steps) || (X <= 0 && !right_steps)) {
    cout << 0 << endl;
    return;
  }

  for (int i = 0; i < S.size() && K > 0; i++) {
    if (S[i] == 'L') {
      X--;
    } else {
      X++;
    }

    K--;

    steps_for_break_point++;

    if (X == 0) {
      Long other = can_from_neutral ? (K / steps_from_neutral) : 0;
      cout << 1 + other << endl;
      return;
    }
  }

  cout << 0 << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}