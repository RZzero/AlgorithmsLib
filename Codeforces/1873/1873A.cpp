#include <bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;
  if (S == "cab" || S == "bca")
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}