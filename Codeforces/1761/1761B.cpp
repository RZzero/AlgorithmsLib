#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  set<int> nums;

  for (auto &n : numbers) {
    cin >> n;
    nums.insert(n);
  }

  if (nums.size() == 2) {
    cout << N / 2 + 1 << endl;
  } else {
    cout << N << endl;
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