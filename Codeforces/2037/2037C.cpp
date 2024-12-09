#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  if (N <= 4) {
    cout << -1 << endl;
  } else {
    for (int i = 2; i <= N; i += 2) {
      if (i == 4)
        continue;
      cout << i << " ";
    }
    cout << ((N > 4) ? "4 5 " : "4 ");
    for (int i = 1; i <= N; i += 2) {
      if (i == 5)
        continue;
      cout << i << " ";
    }
  }
}
int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
}