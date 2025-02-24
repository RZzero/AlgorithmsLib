#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int a, b, c, d;

  cin >> a >> b >> c >> d;
  string iteration = "";
  for (int i = 1; i <= 12; i++) {
    if (i == a || i == b)
      iteration += "r";
    if (i == c || i == d)
      iteration += "b";
  }

  bool ok = true;
  for (int i = 1; i < 4; i++) {
    if (iteration[i] == iteration[i - 1]) {
      ok = false;
    }
  }
  cout << (ok ? "YES" : "NO") << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}