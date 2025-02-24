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

  bool can = false;
  do {
    vector<int> copy = numbers;
    // copy[0] = copy[0] *
  } while (next_permutation(numbers.begin(), numbers.end()));

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