#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N, D;
  cin >> N;
  vector<int> store(N);
  for (auto &n : store)
    cin >> n;

  sort(store.begin(), store.end());

  cin >> D;

  // for (auto &el : store) {
  //   cerr << el << " ";
  // }
  // cerr << endl;

  for (int i = 0; i < D; i++) {
    int d;
    cin >> d;
    auto it = upper_bound(store.begin(), store.end(), d);

    // 1 1 1 1 1 1 1
    Long answer = 0;
    if (it == store.end() || (it != store.end() && *it > d)) {
      it--;
    }
    // cerr << *it << endl;
    if (*it <= d) {
      answer = it - store.begin() + 1;
    }
    cout << answer << endl;
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