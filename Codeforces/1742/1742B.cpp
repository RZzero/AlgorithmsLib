#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;

  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  bool can = true;

  sort(numbers.begin(), numbers.end());
  for (int i = 1; i < N; i++) {
    can &= numbers[i - 1] < numbers[i];
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