#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  int answer = 100;

  for (int i = 1; i <= 10; i++) {
    int current = abs(i - a) + abs(i - b) + abs(i - c);
    answer = min(current, answer);
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