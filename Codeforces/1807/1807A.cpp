#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a + b == c)
    cout << "+" << endl;
  else
    cout << "-" << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}