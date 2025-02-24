#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;

  string ret = N % 33 == 0 ? "YES" : "NO";
  cout << ret << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}