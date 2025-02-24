#include <bits/stdc++.h>
using namespace std;
using Long = long long;

bool check1(Long target, Long mult, Long A, Long B, Long C) {
  return (mult * A + mult * B + mult * C) >= target;
}
bool check2(Long target, Long mult, Long A, Long B, Long C) {
  return (mult * A + mult * B + (mult - 1) * C) >= target;
}
bool check3(Long target, Long mult, Long A, Long B, Long C) {
  return (mult * A + (mult - 1) * B + (mult - 1) * C) >= target;
}

void solve() {
  Long N, A, B, C;
  cin >> N >> A >> B >> C;

  Long answer = 2 * 1e9;
  for (int i = 1; i <= 1; i++) {
    Long res = -1;
    Long L = 1;
    Long R = 2 * 1e9;
    while (L <= R) {
      Long mid = L + (R - L) / 2;
      cerr << mid << endl;
      if (i == 1 && check1(N, mid, A, B, C)) {
        R = mid - 1;
        // } else if (i == 2 && check2(N, mid, A, B, C)) {
        //   R = mid - 1;
        //   res = mid;
        // } else if (i == 3 && check3(N, mid, A, B, C)) {
        //   R = mid - 1;
        //   res = mid;
      } else {
        res = mid;

        L = mid + 1;
      }
    }
    if (res != -1) {
      // cerr << res << endl;
      answer = min(answer, res);
    }
  }

  cout << answer << endl;
}
/**
 * 12 1 5 3
 * 1 + 5 + 3
 *
 * (3 * 1) + (3 * 5) + (3 * 2)
 *
 *
 * N * A + N * B + N * C
 *
 * N * A + N * B + (N-1) * C
 *
 * N * A + (N-1) * B + (N-1) * C
 *
 *
 */
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}