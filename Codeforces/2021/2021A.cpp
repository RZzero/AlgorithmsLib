#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;
  vector<Long> numbers(N);

  for (auto &n : numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());

  Long sum = numbers[0];

  for (int i = 1; i < N; i++) {
    sum = (sum + numbers[i]) / 2;
  }

  cout << sum << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}