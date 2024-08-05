#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int LIMIT = 10;
Long x, y, a, b;

pair<Long, Long> test(Long X, Long deep, Long score, Long max_deep) {
  if (deep == max_deep)
    return {score, X};

  pair<Long, Long> res1 = test(X ^ a, deep + 1, score + (X ^ a), max_deep);
  pair<Long, Long> res2 = test(X ^ a ^ b, deep + 1, score + (X ^ a ^ b), max_deep);

  if (res1.first > res2.first) {
    return res1;
  }
  return res2;
}

void solve() {
  cin >> x >> y >> a >> b;

  auto [steps, last_y] = test(y, 0, 0, 4);

  Long answer = (x / steps) * 4;
  if (x < steps) {
    last_y = y;
    // answer--;
  }
  x = x - (steps * (answer / 4));
  // cout << "steps " << steps << endl;
  // cout << "answer " << answer << endl;
  // cout << "x " << x << endl;
  cerr << "with seven: " << test(last_y, 0, 0, 7).first << endl;
  for (int i = 0; i <= 3; i++) {
    if (test(last_y, 0, 0, i).first >= x) {
      answer += i;
      break;
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