#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N, M, K;
  cin >> N >> M >> K;

  Long besto = (max(N, M) * 1.0);
  Long inbesto = (min(N, M) * 1.0);
  Long A = ceil((1.0 * K) / (((besto * 1.0) / 2) * 1.0 * inbesto));

  Long B = ceil((1.0 * K) / (besto * 1.0 * ((inbesto * 1.0) / 2)));
  cout << max(A, B) << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}