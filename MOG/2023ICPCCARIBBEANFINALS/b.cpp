#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main () {
  int T;
  cin >> T;
  while (T--) {
    Long N, K;
    cin >> N >> K;

    if (K == 0) {
      cout << 60 * 1LL * N << "\n";
    } else if (K == 1) {
      cout << N << "\n";
    } else {
      Long first_match = -1;
      for (Long i = 2; i <= 60; i++) {
        Long real_seconds = i;
        Long bad_clock_seconds = (K * real_seconds) % 60;

        if (bad_clock_seconds == real_seconds || bad_clock_seconds == 0 && i%60 == 0) {
          first_match = real_seconds;
          break;
        }
      }
      cout << first_match * N << "\n";
    }
  }
  return 0;
}