#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int N;
  vector<pair<Long, Long>> giants;
  cin >> N;
  for (int i = 0; i < N; i++) {
    Long a, b;
    cin >> a >> b;
    giants.push_back({a, b});
  }

  sort(giants.begin(), giants.end(), [&giants](pair<Long, Long> x, pair<Long, Long> y) {
    return ((x.second - x.first) < (y.second - y.first));
  });

  auto last = giants.back();
  giants.pop_back();

  Long sum = 0;

  for (auto &[shoulder, head] : giants) {
    sum += shoulder;
  }

  cout << sum + (last.second) << endl;

  return 0;
}