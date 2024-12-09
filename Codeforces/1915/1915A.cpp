#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b)
    cout << c << endl;
  else if (a == c)
    cout << b << endl;
  else
    cout << a << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}