#include <bits/stdc++.h>
using namespace std;

using Long = long long;

void solve() {
  int N;
  cin >> N;

  vector<int> numbers(N);
  for (auto &n : numbers) {
    cin >> n;
  }

  int max_consecutive = 0;
  int max_on_right = 0;
  for (int i = 1; i < N; i++) {
    max_consecutive = max(max_consecutive, numbers[i] - numbers[i - 1]);
    max_on_right = max(max_on_right, numbers[i]);
  }

  int max_lefty = 0;
  for (int i = 0; i < N - 1; i++) {
    max_lefty = max(max_lefty, numbers[N - 1] - numbers[i]);
  }
  cout << max(max_consecutive, max(max_on_right - numbers[0], max_lefty)) << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
}