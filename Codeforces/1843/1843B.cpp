#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N;
  cin >> N;
  vector<Long> numbers(N);
  Long sum = 0;
  for (auto &n : numbers) {
    cin >> n;
    sum += abs(n);
  }

  Long case1 = 0;
  Long case2 = 0;

  // positive to negatives
  int groups = -1;
  int i = 0;
  while (i < numbers.size()) {
    bool a_positive = false;
    while (numbers[i] >= 0 && i < numbers.size()) {
      a_positive = (a_positive || numbers[i] > 0);
      i++;
    }
    if (a_positive) {
      if (groups == -1) {
        groups = 0;
      }
      groups++;
    }

    while (numbers[i] <= 0 && i < numbers.size()) {
      i++;
    }
  }

  case1 = groups == -1 ? 1e18 : groups + 1;

  // negatives to positives directly
  i = 0;
  groups = -1;

  while (i < numbers.size()) {
    bool a_negative = false;
    while (numbers[i] <= 0 && i < numbers.size()) {
      a_negative = (a_negative || numbers[i] < 0);
      i++;
    }
    if (a_negative) {
      if (groups == -1) {
        groups = 0;
      }
      groups++;
    }

    while (numbers[i] >= 0 && i < numbers.size()) {
      i++;
    }
  }

  case2 = groups == -1 ? 1e18 : groups;

  Long all_positives = accumulate(numbers.begin(), numbers.end(), 0 * 1LL) == sum ? 0 : 1e18;
  cout << sum << " " << min(case1, min(all_positives, case2)) << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}
