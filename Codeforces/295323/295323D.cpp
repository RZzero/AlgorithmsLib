#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  Long N, K;
  cin >> N >> K;
  vector<Long> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  bool check1 = K & 1;
  bool check2 = false;

  sort(numbers.begin(), numbers.end());
  Long mx_multiples = 0;

  for (int i = 2; i <= 100; i++) {
    Long current_multiples = 0;
    for (auto &el : numbers) {
      if (el % i == 0) {
        current_multiples++;
      }
    }
    mx_multiples = max(mx_multiples, current_multiples);
  }

  check2 = mx_multiples >= N - 1;
  cout
      << (check1 && check2 ? "YES" : "NO") << endl;

  return 0;
}