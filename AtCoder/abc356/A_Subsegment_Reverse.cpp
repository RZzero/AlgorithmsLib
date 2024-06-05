#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, L, R;
  cin >> N >> L >> R;
  vector<int> numbers;
  vector<int> to_reverse;
  for (int i = 1; i <= N; i++) {
    if (i >= L && i <= R) {
      to_reverse.push_back(i);
    }
  }

  // sort(to_reverse.rbegin(), to_reverse.rend());

  // for (auto &n : to_reverse) {
  //   cout << n << " ";
  // }
  // cout << endl;

  for (int i = 1; i <= N; i++) {
    if (i >= L && i <= R) {
      numbers.push_back(to_reverse.back());
      to_reverse.pop_back();
    } else {
      numbers.push_back(i);
    }
  }

  for (auto &n : numbers) {
    cout << n << " ";
  }
  return 0;
}