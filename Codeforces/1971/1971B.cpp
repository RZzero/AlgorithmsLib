#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  string s;
  cin >> s;
  string t = s;

  for (int i = 1; i < t.size(); i++) {
    if (t[0] != t[i]) {
      swap(t[0], t[i]);
      break;
    }
  }

  cout << (t != s ? "YES" : "NO") << endl;

  if (t != s)
    cout << t << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}