#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;
  if (N == 1) {
    cout << 1 << endl;
    return;
  }

  if (N % 2 == 0) {
    cout << -1 << endl;
    return;
  }

  // 1 2 3 4 5 6 7

  int k = 1;
  for (int i = (N + 1) / 2; i < N; i++) {
    // distance i of
    int n = (i + k) % (N) == 0 ? N : (i + k) % (N);
    cout << n << " ";
    k++;
  }

  cout << (N + 1) / 2 << " ";
  k++;

  for (int i = 1; i < (N + 1) / 2; i++) {
    int n = (i + k) % (N) == 0 ? N : (i + k) % (N);
    cout << n << " ";
    k++;
  }
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