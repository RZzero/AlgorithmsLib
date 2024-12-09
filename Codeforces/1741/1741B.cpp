#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;

  vector<int> numbers;
  for (int i = 1; i <= N; i++) {
    numbers.push_back(i);
  }

  if (N == 3) {
    cout << -1 << endl;
    return;
  }

  reverse(numbers.begin(), numbers.end());
  for (auto &n : numbers)
    cout << n << " ";

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