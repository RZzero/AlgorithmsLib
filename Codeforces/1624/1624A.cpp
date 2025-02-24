#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> prep(2 * 1e5 + 7);

void solve() {
  Long N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());
  if (N == 1) {
    cout << 0 << endl;
    return;
  }
  cout << numbers[N - 1] - numbers[0] << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}