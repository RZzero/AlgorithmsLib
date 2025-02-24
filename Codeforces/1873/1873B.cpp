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

  numbers[0]++;

  Long answer = 1;

  for (auto &n : numbers)
    answer *= n;

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