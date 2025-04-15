#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int n, k, p;
  cin >> n >> k >> p;

  if (k < 0)
    k = k * -1;

  if (p * n >= k) {
    cout << ceil(k * 1.0 / p) << endl;
  } else {
    cout << -1 << endl;
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