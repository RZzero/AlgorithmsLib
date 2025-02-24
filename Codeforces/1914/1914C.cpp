#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N, K;
  cin >> N >> K;

  vector<Long> first_round(N);
  vector<Long> second_round(N);
  for (auto &fr : first_round)
    cin >> fr;
  for (auto &sr : second_round)
    cin >> sr;

  Long answer = first_round[0];
  Long max_second_so_far = second_round[0];
  Long answer_with_first_second = first_round[0] + (K - 1) * second_round[0];
  Long possible_quests = K - 1;
  Long first_round_sum = answer;

  for (int i = 1; i < N; i++) {
    if (i > K - 1)
      break;
    first_round_sum += first_round[i];
    max_second_so_far = max(max_second_so_far, second_round[i]);
    Long cur = first_round_sum + (K - 1 - i * 1LL) * max_second_so_far;
    answer = max(answer, cur);
  }
  cout << max(answer_with_first_second, answer) << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}