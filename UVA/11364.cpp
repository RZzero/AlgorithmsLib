// https://onlinejudge.org/external/113/11364.pdf
#include <bits/stdc++.h>
using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    int N;
    cin >> N;

    int L = INT_MAX;
    int R = INT_MIN;
    for (int i = 0; i < N; i++) {
      int cur; cin >> cur;
      L = min(L, cur);
      R = max(R, cur);
    }
    cout << (R-L) * 2 << endl;
  }
  return 0;
}
