#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;

  while (T--) {
    Long l, r;
    cin >> l >> r;

    Long a = l;
    Long b = l + 1;

    Long steps = 0;

    while (a) {
      a /= 3;
      steps++;
      b *= 3;
    }

    while (b) {
      b /= 3;
      steps++;
    }

    // // 1 2 3 4 5 6
    for (int i = l + 2; i <= r; i++) {
      // cerr << i / 3 << endl;
      steps += ((i / 3));
    }
    cout << steps << endl;
  }
  return 0;
}