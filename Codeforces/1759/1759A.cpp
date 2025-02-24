#include <bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;
  string Yes = "Yes";

  int initial_index = -1;
  for (int i = 0; i < 3; i++) {
    if (S[0] == Yes[i]) {
      initial_index = i;
      break;
    }
  }

  if (initial_index == -1) {
    cout << "NO" << endl;
    return;
  }

  for (int i = 0; i < S.size(); i++, initial_index++) {
    if (S[i] != Yes[initial_index % 3]) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}