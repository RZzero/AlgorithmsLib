#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N;
  cin >> N;
  vector<Long> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  Long sum = numbers[N - 2];
  for (int i = N - 3; i >= 0; i--) {
    sum = sum - numbers[i];
  }

  cout << numbers[N - 1] - sum << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}