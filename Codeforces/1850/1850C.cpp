#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<string> table(8);
  for (int i = 0; i < 8; i++) {
    string S;
    cin >> S;
    table[i] = S;
  }
  string answer = "";

  for (int i = 0; i < 8; i++) {
    bool found = false;
    for (int j = 0; j < 8; j++) {
      if (table[i][j] == '.')
        continue;

      for (int k = i; k < 8; k++) {
        if (table[k][j] == '.')
          continue;
        answer += table[k][j];
      }
      found = true;
    }
    if (found)
      break;
  }

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}