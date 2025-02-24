#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, D;
  cin >> N >> D;

  vector<int> numbers(N);
  for (auto &n : numbers)
    cin >> n;

  sort(numbers.begin(), numbers.end());

  int best = 0;
  stack<int> my_stack;

  for (int i = 0; i < N;) {
    if (!my_stack.size()) {
      my_stack.push(numbers[i]);
      i++;
    }

    while (i < N && (numbers[i] - my_stack.top()) <= D) {
      my_stack.push(numbers[i]);
      i++;
    }

    best = max(best, (int)my_stack.size());

    while (my_stack.size()) {
      my_stack.pop();
    }
  }
  cout << N - best << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}