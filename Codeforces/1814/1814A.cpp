#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N, K;
  cin >> N >> K;

  bool can = false;
  for (int i = 0; i < 2; i++) {
    if ((N - K * i) % 2 == 0 || N % K == 0) {
      can = true;
    }
  }

  cout << (can ? "YES" : "NO") << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
}