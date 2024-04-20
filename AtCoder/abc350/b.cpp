#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Q;
  cin >> N >> Q;

  vector<int> teeths(N + 1, 0);
  vector<int> treatments(Q);
  int answer = N;
  for (auto &q : treatments) {
    cin >> q;
    teeths[q]++;
  }

  for (auto &t : teeths) {
    if (!t)
      continue;
    if (t % 2)
      answer--;
  }
  cout << answer << endl;
  return 0;
}