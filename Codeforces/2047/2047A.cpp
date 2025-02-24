#include <bits/stdc++.h>
using namespace std;
using Long = long long;
set<Long> odds_square;

void solve() {
  int days;
  cin >> days;
  int total_pieces = 0;

  int answer = 0;
  for (int i = 0; i < days; i++) {
    Long d;
    cin >> d;
    total_pieces += d;
    if (odds_square.count(total_pieces)) {
      answer++;
    }
  }

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;

  for (Long i = 1; i <= 100 * 100; i += 2) {
    odds_square.insert(i * i);
  }
  while (T--) {
    solve();
  }
  return 0;
}