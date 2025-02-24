#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, M;
  cin >> N >> M;
  set<int> losb;
  vector<int> A(N);
  vector<int> B;

  for (auto &n : A)
    cin >> n;
  for (int i = 0; i < M; i++) {
    int n;
    cin >> n;
    if (!losb.count(n)) {
      losb.insert(n);
      B.push_back(n);
    }
  }

  sort(B.begin(), B.end());

  for (int i = 0; i < B.size(); i++) {
    A[0] = min(A[0], B[i] - A[0]);
  }

  // int m = B[0];

  // // There are only two states. One in which I did m-A[i] and one in which I did not.
  // // See if I can sorted with one of these.

  // vector<int> forced;

  // for (int i = 0; i < A.size(); i++) {
  //   forced.push_back(m - A[i]);
  // }

  for (int i = 1; i < A.size(); i++) {
    int previous = A[i - 1];

    int lo = 0;
    int hi = B.size() - 1;

    int res = -1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if ((B[mid] - A[i]) >= A[i - 1]) {
        res = mid;
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    }

    if (res != -1 && A[i] >= A[i - 1]) {
      A[i] = min(A[i], B[res] - A[i]);
    } else if (res != -1) {
      A[i] = B[res] - A[i];
    }
  }

  // for (int i = 0; i < A.size(); i++) {
  //   cerr << A[i] << " ";
  // }
  // cerr << endl;
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