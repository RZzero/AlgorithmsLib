#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;

  if (N <= 2) {
    cout << N << endl;
    return;
  }

  // When to start with 2?
  // When to start with 1?
  // N <= 1000, Just bruteforce and try the two ways...

  bool ok1 = false;
  bool ok2 = false;
  string S = "";
  string T = "";

  int sum = 0;
  bool one = true;
  for (int i = 0; i <= 5000 && !ok1 && sum < N; i++) {
    S += one ? '1' : '2';
    sum += one ? 1 : 2;
    one = !one;

    if (sum == N) {
      ok1 = true;
      break;
    }
  }

  ok1 &= sum == N;

  one = false;
  sum = 0;
  for (int i = 0; i <= 5000 && !ok2 && sum < N; i++) {
    T += one ? '1' : '2';
    sum += one ? 1 : 2;
    one = !one;
    if (sum == N) {
      ok2 = true;
      break;
    }
  }

  ok2 &= sum == N;

  // cerr << ok1 << " " << S << " " << ok2 << " " << T << endl;
  if (ok1 && ok2) {
    if (S > T)
      cout << S << endl;
    else
      cout << T << endl;
  } else if (ok1) {
    cout << S << endl;
  } else {
    cout << T << endl;
  }
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}