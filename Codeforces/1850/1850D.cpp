#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, D;
  cin >> N >> D;

  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());

  int best = 0;

  int i = 1;
  while (i < N) {
    int cur = 1;
    while (i < N && abs(numbers[i] - numbers[i - 1]) <= D) {
      cur++;
      i++;
    }
    i++;
    best = max(best, cur);
    // cerr << "besto " << best << endl;
    // if (i < N && abs(numbers[i] - numbers[i - 1]) > D)
    //   i++;
  }
  // cerr << endl;

  cout << ((N == 1 || best == N) ? 0 : N - best) << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}