#include <bits/stdc++.h>
using namespace std;
void solve() {
  int N;
  cin >> N;

  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());

  for (int i = 1; i < numbers.size(); i++) {
    if (abs(numbers[i - 1] - numbers[i]) > 1) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}