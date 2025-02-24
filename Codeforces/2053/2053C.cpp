#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long N, K;

void solve() {
  cin >> N >> K;
  deque<pair<Long, Long>> segments;

  segments.push_back({1, N});
  Long answer = 0;

  while (segments.size()) {
    auto cur = segments.back();
    segments.pop_back();

    Long segment_length = (cur.second - cur.first) + 1;
    if (segment_length < K)
      continue;

    // cerr << "processed segment: " << cur.first << " " << cur.second << endl;
    Long m = (cur.second + cur.first) / 2;
    if (segment_length % 2 == 0) {
      segments.push_back({cur.first, m});
      segments.push_back({m + 1, cur.second});
    } else {
      // cerr << "Addded m " << m << endl;
      answer += m;
      // if (cur.first <= m - 1) {
      // cerr << "appended " << cur.first << " " << m - 1 << endl;
      segments.push_back({cur.first, m - 1});
      segments.push_back({m + 1, cur.second});
      // }
      // cerr << "appended " << m + 1 << " " << cur.second << endl;
      // if (m + 1 <= cur.second) {
      // }
    }
  }
  // cerr << endl;
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