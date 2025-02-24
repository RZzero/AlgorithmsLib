#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<pair<int, int>> numbers;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    numbers.push_back({n, i});
  }

  sort(numbers.begin(), numbers.end());
  reverse(numbers.begin(), numbers.end());
  vector<int> answer(N);
  for (auto [number, index] : numbers) {
    if (number == numbers[0].first) {
      answer[index] = number - numbers[1].first;
    } else {
      answer[index] = number - numbers[0].first;
    }
  }

  for (auto &n : answer)
    cout << n << " ";

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