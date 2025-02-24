#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, M;
  cin >> N >> M;

  vector<int> A(N);
  vector<int> B(M);

  for (auto &n : A)
    cin >> n;
  for (auto &n : B)
    cin >> n;

  // vector<int> reversed = A;
  // reverse(reversed.begin(), reversed.end());

  int m = B[0];

  // There are only two states. One in which I did m-A[i] and one in which I did not.
  // See if I can sorted with one of these.

  vector<int> forced;

  for (int i = 0; i < A.size(); i++) {
    forced.push_back(m - A[i]);
  }

  for (int i = 0; i < A.size(); i++) {
    if (i == 0) {
      A[i] = min(forced[i], A[i]);
    } else {
      // try to take the min as long is does not violates the condition for it to stay sorted.
      A[i] = min(forced[i], A[i]) >= A[i - 1] ? min(forced[i], A[i]) : max(forced[i], A[i]);
    }
  }
  if (is_sorted(A.begin(), A.end())) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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