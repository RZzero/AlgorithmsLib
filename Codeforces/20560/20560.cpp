#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, M;
  cin >> N >> M;

  int answer = M + M;

  int initial_x = M;
  int initial_y = M;
  for (int i = 0; i < N; i++) {
    int add_x, add_y;
    cin >> add_x >> add_y;

    int added = (2 * add_x) + (2 * add_y);
    answer += added;

    cerr << answer << " ";
  }
  cerr << endl;
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