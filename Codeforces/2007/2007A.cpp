#include <bits/stdc++.h>
using namespace std;

vector<bool> primes(1001, true);
void solve() {
  int L, R;
  cin >> L >> R;

  // int range_length = R - L + 1;
  int odds = 0;
  for (int i = L; i <= R; i++) {
    if (i % 2)
      odds++;
  }

  cout << odds / 2 << endl;
}

int main() {

  int T;
  cin >> T;

  // primes[1] = 1;
  // for (int i = 2; i <= 1000; i++) {
  //   if (primes[i]) {
  //     for (int j = i + i; j <= 1000; j += i) {
  //       primes[j] = false;
  //     }
  //   }
  // }

  while (T--) {
    solve();
  }
  return 0;
}