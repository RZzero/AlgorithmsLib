#include <bits/stdc++.h>
using namespace std;

void solve() {
  map<int, int> required;
  required[0] = 3;
  required[1] = 1;
  required[2] = 2;
  required[3] = 1;
  required[5] = 1;
  map<int, int> have;
  int N;
  cin >> N;
  for (int i = 0; i <= 5; i++) {
    if (i == 4)
      continue;
    have[i] = 0;
  }

  bool can_have = false;
  int answer = 0;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    have[n]++;
    if (!can_have) {
      bool completed = true;
      for (auto &cur : required) {
        completed &= have[cur.first] >= cur.second;
      }
      can_have = completed;
      if (can_have) {
        answer = i + 1;
      }
    }
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