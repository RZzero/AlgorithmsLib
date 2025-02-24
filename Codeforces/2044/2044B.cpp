#include <bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;

  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'p') {
      S[i] = 'q';
    } else if (S[i] == 'q') {
      S[i] = 'p';
    }
  }
  reverse(S.begin(), S.end());
  cout << S << endl;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}