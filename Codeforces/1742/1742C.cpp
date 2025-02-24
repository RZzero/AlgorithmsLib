#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<string> table;

  for (int i = 0; i < 8; i++) {
    string s;
    cin >> s;
    table.push_back(s);
  }

  bool red = false;

  for (int i = 0; i < 8; i++) {
    if (table[i][0] == 'R') {
      int cnt = 0;
      for (int j = 0; j < 8; j++) {
        if (table[i][j] == 'R') {
          cnt++;
        }
      }
      if (cnt == 8) {
        red = true;
        break;
      }
    }
  }

  cout << (red ? "R" : "B") << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}