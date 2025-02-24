#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long introverts, extroverts, universals;
  cin >> introverts >> extroverts >> universals;

  Long sum = introverts;
  Long res = extroverts % 3;
  bool can = extroverts % 3 == 0;

  if (!can) {
    Long needed = 3 - res;
    if (universals < needed) {
      cout << -1 << endl;
      return;
    }
    universals -= needed;
    extroverts += needed;
  }

  sum += (ceil(universals * 1.0 / 3)) + ceil((extroverts * 1.0 / 3));
  cout << sum << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}