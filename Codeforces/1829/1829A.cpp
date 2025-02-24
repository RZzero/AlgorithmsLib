#include <bits/stdc++.h>
using namespace std;

void solve() {
  string cf = "codeforces";
  string S;
  cin >> S;

  int answer = 0;
  for (int i = 0; i < cf.size(); i++) {
    if (S[i] != cf[i])
      answer++;
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