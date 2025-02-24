#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N;
  cin >> N;

  Long times = 1;

  while (N > 3) {
    N = N / 4;
    times *= 2;
  }

  cout << times << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}