// https://codeforces.com/problemset/problem/1095/B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> numbers (N);

  for (auto &n: numbers) cin >> n;

  sort(numbers.begin(), numbers.end());

  if (N == 2) {
    cout << 0 << endl;
  } else {
    int mx = -1e9;
    int mn = 1e9;
    int mx1 = -1e9;
    int mn1 = 1e9;

    for (int i = 0; i < N-1; i++) {
      mx = max(mx, numbers[i]);
      mn = min(mn, numbers[i]);
    }

    for (int i = 1; i < N; i++) {
      mx1 = max(mx1, numbers[i]);
      mn1 = min(mn1, numbers[i]);
    }

    cout << min(mx-mn, mx1-mn1) << endl;
  }
  return 0;
}