#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  int mn = min(a, b);
  int mx = max(a, b);

  int answer = 0;
  while (mn < mx) {
    mn += c;
    mx -= c;
    answer++;
  }
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