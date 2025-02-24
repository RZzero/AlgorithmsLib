#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> directions(4, 0);
  // 0 => up
  // 1 => right
  // 2 => down
  // 3 => left

  for (int i = 0; i < N; i++) {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
      continue;
    if (x == 0 && y > 0)
      directions[0] = max(directions[0], y);
    if (x > 0 && y == 0)
      directions[1] = max(directions[1], x);
    if (x == 0 && y < 0)
      directions[2] = max(directions[2], y * -1);
    if (x < 0 && y == 0)
      directions[3] = max(directions[3], x * -1);
  }

  bool on_y = directions[0] > 0 || directions[2] > 0;
  bool on_x = directions[1] > 0 || directions[3] > 0;
  int mn = 1e9;
  int mx = 0;
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    sum += directions[i];
    int mn = min(directions[i], mn);
    int mx = max(directions[i], mx);
  }

  cout << sum * 2 << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}