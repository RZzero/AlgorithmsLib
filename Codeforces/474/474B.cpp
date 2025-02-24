#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  Long N, M;
  cin >> N;
  vector<int> worms(N);
  vector<int> intervals;
  for (auto &w : worms) {
    cin >> w;
    if (!intervals.size()) {
      intervals.push_back(w);
    } else {
      intervals.push_back(intervals.back() + w);
    }
  }

  cin >> M;

  for (int i = 0; i < M; i++) {
    int q;
    cin >> q;
    auto it = lower_bound(intervals.begin(), intervals.end(), q);
    cout << it - intervals.begin() + 1 << endl;
  }
}

int main() {
  int T;
  // cin >> T;
  T = 1;
  while (T--) {
    solve();
  }
}