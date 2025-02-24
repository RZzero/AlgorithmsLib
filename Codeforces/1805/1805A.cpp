#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  int answer = 0;

  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    answer ^= n;
  }

  if (!answer) {
    cout << 0 << endl;
  } else if (N & 1) {
    cout << answer << endl;
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