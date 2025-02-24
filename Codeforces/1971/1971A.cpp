#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long X, Y;
  cin >> X >> Y;
  cout << min(X, Y) << " " << max(X, Y) << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}