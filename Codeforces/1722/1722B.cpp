#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s, t;
  cin >> n;
  cin >> s >> t;
  for (auto &c: s) c = (c == 'G' ? 'B' : c);
  for (auto &c: t) c = (c == 'G' ? 'B' : c);

  cout << (t == s ? "YES" : "NO")  << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}