#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;
  Long for_a = 0, for_b = 0;
  vector<int> A(N);
  vector<int> B(N);
  for (auto &a : A)
    cin >> a;
  for (auto &b : B)
    cin >> b;

  for (int i = 0; i < N; i++) {
    bool a_is_min = for_a < for_b;
    int current = max(A[i], B[i]);
    if (current < 0) {
      if (a_is_min) {
        for_b += current;
      } else {
        for_a += current;
      }
    } else {
      if (a_is_min) {
        for_a += current;
      } else {
        for_b += current;
      }
    }
  }

  cout << min(for_a, for_b) << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}