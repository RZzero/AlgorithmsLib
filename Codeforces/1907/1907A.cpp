#include <bits/stdc++.h>
using namespace std;

void solve() {
  string cur;
  cin >> cur;

  for (int i = 1; i <= 8; i++) {
    if (i == cur[1] - '0')
      continue;
    cout << cur[0] << i << endl;
  }
  for (int i = 'a'; i <= 'h'; i++) {
    if (i == cur[0])
      continue;

    cout << (char)i << cur[1] << endl;
  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}