#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  // More or less chess game of towers but move at most 1 per turn???
  int x, y;
  cin >> x >> y;
  bool can = true;
  for (int i = 0; i < k; i++) {
    int w, q;
    cin >> w >> q;
    if ((x + y) % 2 == (w + q) % 2) {
      can &= false;
    }
  }

  cout << (can ? "YES" : "NO") << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}