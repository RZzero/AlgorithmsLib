#include <bits/stdc++.h>
using namespace std;

void solve() {
  string codeforces = "codeforces";
  char c;
  cin >> c;
  cout << (codeforces.find(c) != string::npos ? "YES" : "NO") << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}