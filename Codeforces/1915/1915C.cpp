#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;
  Long sum = 0;
  vector<Long> numbers(N);
  for (auto &n : numbers) {
    cin >> n;
    sum += n;
  }

  double squared_sum = sqrt(sum);
  // cout << squared_sum << endl;
  cout << ((Long)ceil(squared_sum) == (Long)floor(squared_sum)
               ? "YES"
               : "NO")
       << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}