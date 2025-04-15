#include <bits/stdc++.h>

using namespace std;
using Long = long long;
void solve() {
  Long N;
  cin >> N;

  Long answer = 0;

  while (N >= 1) {
    answer += N;
    N /= 2;
  }
  // int cnt = 0;
  // vector<Long> powers;
  // for (int i = 63; i >= 0; i--) {
  //   if (N &)
  // }

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}