#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main () {
  int T;
  cin >> T;
  while (T--) {
    int N, M;
    cin >> N >> M;
    vector<Long> A(N);
    vector<Long> B(M);
    // Long mini = 1e9;
    // Long maxi = -1e9;
    Long mini = 0;
    Long maxi = 0;
    for (int i = 0; i < N; i++) {
      cin >> A[i];
      // mini = min(A[i], mini);
      // maxi = max(A[i], maxi);
    }

    for (int i = 0; i < M; i++) {
      cin >> B[i];
    }

    for (int i = 31; i >= 0; i--) {
      int cnt_a = 0, cnt_b = 0;

      for (int j = 0; j < A.size(); j++) {
        if (A[j] & (1 << i)) {
          cnt_a++;
        }
      }

      for (int j = 0; j < B.size(); j++) {
        if (B[j] & (1 << i)) {
          cnt_b++;
        }
      }

      if (cnt_b % 2 == 1) {
        maxi |= (1 << i);
      }

      if (cnt_a % 2 == 1) {
        if (cnt_b % 2 == 1) {
          mini |= (1 << i);
        } else {
          maxi |= (1 << i);
        }
      }
    }
    cout << mini << " " << maxi << endl;
  }
  return 0;
}