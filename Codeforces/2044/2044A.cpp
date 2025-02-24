#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N;
  cin >> N;
  int answer = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = N; j > 0; j--) {
      if (i + j == N) {
        answer++;
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