#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  string S;
  cin >> N >> S;

  char greatest = '0';

  for (auto &c : S) {
    greatest = max(c, greatest);
  }

  cout << (greatest - 'a') + 1 << endl;
}
int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}