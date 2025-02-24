#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, K;
  cin >> N >> K;

  for (int i = 1; i < K + 1; i++) {
    cout << i << " ";
  }

  for (int i = N; i > K + 1; i--) {
    cout << i << " ";
  }
  cout << K + 1;
  cout << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}