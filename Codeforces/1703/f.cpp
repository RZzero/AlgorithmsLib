#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<pair<int, int>> numbers;
    vector<int> for_compute;
    for (int i = 1; i <= N; i++) {
      int n;
      cin >> n;
      if (n < i) {
        numbers.push_back({n, i});
        for_compute.push_back(n);
      }
    }

    sort(for_compute.begin(), for_compute.end());

    Long answer = 0;

    for (auto &p : numbers) {
      auto it = lower_bound(for_compute.begin(), for_compute.end(), p.second + 1);
      if (*it) {
        answer += numbers.size() - (it - for_compute.begin());
      }
    }
    cout << answer << endl;
  }
  return 0;
}