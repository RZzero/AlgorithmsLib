#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  bool can = true;
  vector<bool> used(N + 10, false);
  used[numbers[0]] = true;

  for (int i = 1; i < N; i++) {
    bool left_ok = numbers[i] - 1 >= 0 && used[numbers[i] - 1];
    bool right_ok = numbers[i] + 1 <= N && used[numbers[i] + 1];

    if (i > 0 && (left_ok || right_ok)) {
      used[numbers[i]] = true;
    } else {
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