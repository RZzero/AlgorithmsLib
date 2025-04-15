#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long X, Y;
  cin >> X >> Y;
  if (X % Y == 0) {
    cout << 0 << endl;
  } else if (X < Y) {
    cout << Y - X << endl;
  } else {
    Long times = ceil((X * 1.0) / Y);
    Long nexto = times * Y;
    cout << nexto - X << endl;
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