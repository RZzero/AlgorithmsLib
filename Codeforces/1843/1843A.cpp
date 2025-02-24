#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &l : numbers)
    cin >> l;

  sort(numbers.begin(), numbers.end());
  int answer = 0;

  for (int i = 0; i < N / 2; i++) {
    answer += (numbers[N - 1 - i] - numbers[i]);
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