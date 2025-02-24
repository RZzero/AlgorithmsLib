#include <bits/stdc++.h>
using namespace std;

void solve() {
  int N, T;
  cin >> N >> T;
  vector<int> seconds(N);
  vector<int> entertainment(N);

  for (auto &v : seconds)
    cin >> v;
  for (auto &v : entertainment)
    cin >> v;

  int answer = -1;
  int mx_entertainment = 0;
  for (int i = 0; i < N; i++) {
    if (seconds[i] + i <= T) {
      if (answer == -1 || entertainment[i] > mx_entertainment) {
        mx_entertainment = max(mx_entertainment, entertainment[i]);
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