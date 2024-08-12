#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>> intervals(n);

    for (auto &interval : intervals) {
      cin >> interval.first >> interval.second;
    }

    sort(intervals.begin(), intervals.end());

    bool can = false;

    int last_ri = 0;
    for (int i = 0; i < intervals.size(); i++) {
      if (intervals[i].first - last_ri >= s) {
        can = true;
        break;
      }
      last_ri = intervals[i].second;
    }
    if (m - last_ri >= s)
      can = true;
    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}