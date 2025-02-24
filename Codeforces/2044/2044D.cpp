#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;
  vector<int> numbers(N);
  vector<int> solved(N, 0);
  set<int> used;

  for (int i = 0; i < N; i++) {
    cin >> numbers[i];
    if (!used.count(numbers[i])) {
      solved[i] = numbers[i];
      used.insert(numbers[i]);
    }
  }

  // for (auto &el : solved) {
  //   cerr << el << " ";
  // }
  // cerr << endl;
  int i = 0;
  int next = 1;
  while (used.size() != N && i < N) {

    if (!solved[i]) {
      while (used.count(next)) {
        next++;
      }
      solved[i] = next;
      used.insert(next);
    }
    i++;
  }

  for (auto &s : solved) {
    cout << s << " ";
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