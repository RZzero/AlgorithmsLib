#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long N, M;
  cin >> N >> M;
  Long mx = max(N, M);
  cout << mx + 1 << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}