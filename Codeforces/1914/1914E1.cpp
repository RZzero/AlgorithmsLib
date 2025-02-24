#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long N;
vector<Long> alice_colors;
vector<Long> bob_colors;
Long recursive_game(vector<Long> alice_colors, vector<Long> bob_colors, Long current_turn) {
  if (current_turn == N - 1) {
    return accumulate(alice_colors.begin(), alice_colors.end(), 0) + accumulate(bob_colors.begin(), bob_colors.end(), 0);
  }
}

void solve() {
  cin >> N;

  alice_colors = vector<Long>(N);
  bob_colors = vector<Long>(N);

  Long max_score = accumulate(alice_colors.begin(), alice_colors.end(), 0) + accumulate(bob_colors.begin(), bob_colors.end(), 0);

  // cout <<
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}