#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int n_steps, n_questions;
  cin >> n_steps >> n_questions;

  vector<Long> steps(n_steps);
  vector<Long> questions(n_questions);

  for (auto &s : steps)
    cin >> s;
  for (auto &q : questions)
    cin >> q;

  vector<Long> highest_so_far(n_steps + 1, 0);
  vector<Long> prefix_sum(n_steps + 1, 0);

  for (int i = 1; i < (int)highest_so_far.size(); i++) {
    highest_so_far[i] = max(highest_so_far[i - 1], steps[i - 1]);
    prefix_sum[i] = prefix_sum[i - 1] + steps[i - 1];
  }

  for (auto &question : questions) {
    auto it = upper_bound(highest_so_far.begin(), highest_so_far.end(), question);
    it--;
    if (it != highest_so_far.end()) {
      cout << prefix_sum[it - highest_so_far.begin()] << " ";
    }
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