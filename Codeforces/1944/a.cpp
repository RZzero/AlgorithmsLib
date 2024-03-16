#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;

    // needs to take n-1 for taking out a node.
    if (k == 0) {
      cout << n << endl;
      continue;
    }
    int total_bridges = (n * (n - 1)) / 2;

    if (k == total_bridges || k >= n - 1) {
      cout << 1 << endl;
    } else {
      int calc = k / (n - 1);
      cout << n - calc << endl;
    }
  }
  return 0;
}