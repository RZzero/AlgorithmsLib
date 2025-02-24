#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;

  int best = 0;
  int best_index = -1;
  for (int i = 1; i <= N; i++) {
    int a, b;
    cin >> a >> b;
    if (a <= 10 && b > best) {
      best_index = i;
      best = b;
    }
  }

  cout << best_index << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}