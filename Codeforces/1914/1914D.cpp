#include <bits/stdc++.h>
using namespace std;
using Long = long long;

bool comparator(const pair<Long, Long> &a, const pair<Long, Long> &b) {
  return a.first > b.first;
};
void solve() {
  Long N;
  cin >> N;

  vector<pair<Long, Long>> A;
  vector<pair<Long, Long>> B;
  vector<pair<Long, Long>> C;

  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    A.push_back({n, i});
  }
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    B.push_back({n, i});
  }
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    C.push_back({n, i});
  }

  sort(A.begin(), A.end(), comparator);
  sort(B.begin(), B.end(), comparator);
  sort(C.begin(), C.end(), comparator);

  Long answer = 0;

  // for (auto &[first, second] : A) {
  //   cerr << first << " ";
  // }
  // cerr << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (A[i].second == B[j].second || A[i].second == C[k].second || B[j].second == C[k].second)
          continue;
        answer = max(answer, A[i].first + B[j].first + C[k].first);
      }
    }
  }

  cout << answer << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}