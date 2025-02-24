#include <bits/stdc++.h>
using namespace std;

using Long = long long;

void solve() {
  int N, M;
  cin >> N >> M;

  vector<pair<int, vector<int>>> calculate;
  vector<vector<int>> arrays(N);

  for (int i = 0; i < N; i++) {
    int score = 0;
    for (int j = 0; j < M; j++) {
      int n;
      cin >> n;
      score += n;
      arrays[i].push_back(n);
    }
    calculate.push_back({score, arrays[i]});
  }

  sort(calculate.begin(), calculate.end());
  reverse(calculate.begin(), calculate.end());

  Long answer = 0;

  vector<Long> permu;
  for (int i = 0; i < calculate.size(); i++) {
    for (int j = 0; j < M; j++) {
      permu.push_back(calculate[i].second[j]);
    }
  }

  Long permu_size = permu.size();
  for (Long i = 0; i < permu.size(); i++) {
    answer += permu[i] * 1LL * (permu_size - i);
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