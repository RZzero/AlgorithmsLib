#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, K;
  cin >> N >> K;

  vector<int> numbers(N, 0);

  int cur = 1;
  for (int i = K - 1; i < N; i += K) {
    numbers[i] = cur;
    cur++;
  }

  for (int i = 0; i < numbers.size(); i++) {
    if (!numbers[i]) {
      numbers[i] = cur;
      cur++;
    }
  }

  for (auto &el : numbers) {
    cout << el << " ";
  }
  cout << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}