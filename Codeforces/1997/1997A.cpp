#include <bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;
  string new_s = "";

  auto next_char = [&](char x) -> char {
    if (x == 'z') {
      return 'a';
    }
    return x + 1;
  };

  bool added = false;
  new_s += S[0];
  for (int i = 1; i < S.size(); i++) {
    if (S[i] == S[i - 1] && !added) {
      added = true;
      new_s += next_char(S[i]);
    }
    new_s += S[i];
  }

  if (!added) {
    new_s += next_char(S[S.size() - 1]);
  }
  cout << new_s << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}