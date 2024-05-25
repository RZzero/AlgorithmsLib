#include <bits/stdc++.h>
using namespace std;

void solve() {
  int x, y;
  cin >> x >> y;
  int cp_x = x, cp_y = y;

  for (int i = 0; cp_x && cp_y; i++) {
    if ((cp_x & 1) && (cp_y & 1)) {
      x = x ^ (1 << i);
    }
    cp_x = (cp_x >> 1);
    cp_y = (cp_y >> 1);
  }

  cout << x << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}