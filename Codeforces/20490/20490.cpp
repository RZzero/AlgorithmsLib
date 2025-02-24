#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> numbers;
  int zeroes = 0;

  bool surrounded = false;
  bool lefty = 0;
  bool righty = 0;
  int record_z = 0;

  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    numbers.push_back(n);
    if (n == 0)
      zeroes++;

    if (n > 0 && !record_z) {
      lefty = true;
    } else if (lefty && !record_z && !n) {
      record_z++;
    } else if (record_z && n) {
      righty = true;
    }

    if (lefty && righty && record_z) {
      surrounded = true;
      // break;
    }
  }

  if (zeroes == N) {
    cout << 0 << endl;
    return;
  }

  if (!surrounded) {
    cout << 1 << endl;
    return;
  }

  cout << 2 << endl;
}
int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}