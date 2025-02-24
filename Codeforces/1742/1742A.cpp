#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> numbers = {a, b, c};

  cout << ((a + b == c || a + c == b || b + c == a) ? "YES" : "NO") << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}