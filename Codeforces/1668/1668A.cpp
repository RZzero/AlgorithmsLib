#include <bits/stdc++.h>
using namespace std;

void solve() {
  int A, B;
  cin >> A >> B;

  int mn = min(A, B);
  int mx = max(A, B);

  if (mn == 1 && mx > 2)
    cout << -1 << endl;
  else {
    if (mn != mx) {
      int diferencia = mx - mn;
      int extra = diferencia == 1;
      if (diferencia > 1) {
        extra += (diferencia / 2) * 3 + diferencia - diferencia / 2;
      }
      cout << (mn - 1 + mn - 1) + extra << endl;
    } else {
      cout << mx - 1 + mn - 1 << endl;
    }
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