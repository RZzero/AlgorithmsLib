#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N;
  string S;
  cin >> N >> S;
  Long initial_sum = 0;
  vector<pair<Long, Long>> better;
  vector<Long> original_contribution(N, 0);

  Long max_can_get = 0;
  for (Long i = 0; i < N; i++) {
    if (S[i] == 'L') {
      initial_sum += i;
      original_contribution[i] = i;
    } else {
      initial_sum += (N - 1 - i);
      original_contribution[i] = N - i - 1;
    }

    // Si fuera a voltearlo, cuanto aportaría?
    Long bettered = max(i, N - i - 1);

    max_can_get += bettered;
    better.push_back({i, bettered});
  }

  sort(better.begin(), better.end(), [](const pair<Long, Long> &a, const pair<Long, Long> &b) {
    return a.second > b.second;
  });

  deque<pair<Long, Long>> next_additions;
  for (auto [index, contribution] : better) {
    if (contribution > original_contribution[index]) {
      next_additions.push_back({index, contribution});
    }
  }

  for (int i = 0, j = 0; i < N; i++) {
    Long to_add = 0;
    if (next_additions.size()) {
      auto front = next_additions.front();
      initial_sum -= original_contribution[front.first];
      to_add = front.second;
      next_additions.pop_front();
    }

    initial_sum += to_add;
    cout << initial_sum << " ";
  }
  cout << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}