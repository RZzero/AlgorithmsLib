#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  int answer = 0;

  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] == 1)
      continue;
    int j = i;
    int cnt = 0;
    while (j < numbers.size() && numbers[j] == 0) {
      j++;
      cnt++;
    }
    answer = max(answer, cnt);
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