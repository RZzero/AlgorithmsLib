#include <bits/stdc++.h>
using namespace std;
void solve() {
  int N;
  cin >> N;

  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      if (i == j)
        continue;

      int x = N - i - j;
      int y = N - j - x;
      int z = N - i - x;

      if (x > 0 && y > 0 && z > 0 && (x % 3 != 0) && (y % 3 != 0) && (z % 3 != 0) && x != y && x != z && y != z) {
        cout << "YES" << endl;
        cout << x << " " << y << " " << z << endl;
        return;
      }
    }
  }

  cout << "NO" << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
}