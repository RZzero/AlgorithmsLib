#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> intervals(N);
  map<int, int> max_cnt;
  map<int, int> counted_for_max;
  for (auto &interval : intervals) {
    int a, b;
    cin >> a >> b;
    interval.first = a;
    interval.second = b;
    max_cnt[b]++;
  }

  int answer = 0;

  sort(intervals.begin(), intervals.end(), [&intervals](pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first) {
      return true;
    }

    return false;
  });
  sort(intervals.begin(), intervals.end(), [&intervals](pair<int, int> a, pair<int, int> b) {
    if (a.second < b.second) {
      return true;
    }
    return false;
  });

  for (int i = 0; i < intervals.size(); i++) {
    auto cur_interval = intervals[i];
    cout << cur_interval.first << " " << cur_interval.second << endl;
    // if (cur_interval.second <)
  }
  return 0;
}