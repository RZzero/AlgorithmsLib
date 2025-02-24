#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<string> table(2);
  for (int i = 0; i < 2; i++) {
    string S;
    cin >> S;
    table[i] = S;
  }

  bool can_pass = true;

  for (int i = 1; i < N; i++) {
    if (table[0][i] == '1' && table[1][i] == '1') {
      can_pass = false;
      break;
    }
  }
  cout << ((can_pass) ? "YES" : "NO") << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}