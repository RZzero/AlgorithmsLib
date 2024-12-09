#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int K;
  cin >> K;

  vector<int> numbers(K);

  for (auto &n : numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());

  // n * m = k-2
  // m = (k-2) / n if k-2 divisible by n

  for (int i = 0; i < K; i++) {
    int n = numbers[i];
    if ((K - 2) % n)
      continue;

    int to_search = (K - 2) / n;
    auto it = lower_bound(numbers.begin() + i + 1, numbers.end(), to_search);
    if (it != numbers.end() && (*it * numbers[i]) == K - 2) {
      cout << numbers[i] << " " << *it << endl;
      return;
    }
  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}