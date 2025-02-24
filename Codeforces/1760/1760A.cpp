#include <bits/stdc++.h>
using namespace std;

void solve() {
  vector<int> numbers(3);
  for (auto &n : numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());
  cout << numbers[1] << endl;
}
int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}