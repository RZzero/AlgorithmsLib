#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;

  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  bool can = true;
  for (int i = 1; i < N; i++) {
    int diff = abs(numbers[i - 1] - numbers[i]);
    if (!(diff == 5 || diff == 7)) {
      can = false;
      break;
    }
  }

  cout << (can ? "YES" : "NO") << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}