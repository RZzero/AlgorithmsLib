#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N, K;
  cin >> N >> K;
  vector<int> numbers(N);
  for (int i = 0; i < numbers.size(); i++) {
    cin >> numbers[i];
  }
  Long first_cnt = 0, second_cnt = 0;
  Long first_val = 0, second_val = 0;
  for (int i = 0; i < numbers.size(); i++) {
    if (first_cnt < K && numbers[i] == numbers[0]) {
      first_cnt++;
      first_val += numbers[0];
    }
    if (first_cnt == K && second_cnt < K && numbers[i] == numbers[N - 1]) {
      second_cnt++;
      second_val += numbers[N - 1];
    }
  }

  bool can = first_cnt == K && second_cnt == K && ((first_val + second_val) % K == 0);
  bool one_path_enough = first_cnt == K && numbers[0] == numbers[N - 1] && first_val % K == 0;
  cout << (can || one_path_enough ? "YES" : "NO") << endl;
  // cout << (can || one_path_enough ? "YES" : "NO") << " " << one_path_enough << endl;
}
int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}