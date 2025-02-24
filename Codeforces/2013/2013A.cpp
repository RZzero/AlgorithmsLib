#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long N, X, Y;
  cin >> N >> X >> Y;
  Long to_use = min(X, Y);

  if (N == 0) {
    cout << 0 << endl;
    return;
  }

  bool not_divisible = N % to_use != 0;
  cout << N / to_use + not_divisible << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}