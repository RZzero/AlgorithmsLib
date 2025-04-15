#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long N;
  cin >> N;

  Long maxi = (N * (N + 1)) / 2;
  // == 15

  // 6 8 12 15
  // 1 2 4 3 5

  bool can = true;
  set<Long> seto;
  vector<Long> numbers(N - 1);
  Long prev = 0;
  Long max_diff = maxi - 1;
  vector<Long> differences;
  for (auto &n : numbers) {
    cin >> n;
    Long diff = n - prev;
    // can &= n > prev;
    can &= n > prev;

    differences.push_back(diff);
    prev = n;
    seto.insert(diff);
  }

  int cnt = 0;
  vector<int> missing;
  for (int i = 1; i <= N; i++) {
    if (!seto.count(i)) {
      missing.push_back(i);
    } else {
      cnt++;
    }
  }

  if (cnt + missing.size() == N) {
    can = true;
  } else {
    can = false;
  }
  for (auto &d : differences) {
    cerr << d << " ";
  }
  cerr << endl;
  // if (can) {
  //   for (int i = 1; i < numbers.size(); i++) {
  //     if (seto.count(numbers[i] - numbers[i - 1])) {
  //       can = false;
  //       break;
  //     }

  //     seto.insert(numbers[i] - numbers[i - 1]);
  //   }
  // }

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