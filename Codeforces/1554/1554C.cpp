#include <bits/stdc++.h>
using namespace std;

void solve() {
  int X, Y;
  cin >> X >> Y;

  // for (int i = 0; i <= Y; i++) {
  // }
}

int main() {

  int T;
  cin >> T;

  for (int j = 0; j <= 8; j++) {
    for (int i = 0; i <= 8; i++) {
      cerr << (j ^ i) << " ";
    }
    cerr << endl;
    cerr << endl;
  }
  while (T--) {
    solve();
  }
  return 0;
}