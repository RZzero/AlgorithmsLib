#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long m, a, b, c;
  cin >> m >> a >> b >> c;

  Long answer = min(m, a);
  if (answer < m && c) {
    int to_take = m - answer;
    if (answer + c > m) {
      c -= to_take;
      answer += to_take;
    } else {
      answer += c;
      c = 0;
    }
  }

  answer += min(m, b);
  if (answer < m * 2) {
    answer += c;
    if (answer > m * 2) {
      answer = m * 2;
    }
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