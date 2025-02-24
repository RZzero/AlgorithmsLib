#include <bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;
  if (S.size() <= 2) {
    cout << "i" << endl;
  } else {
    string answer = "";
    for (int i = 0; i < S.size() - 2; i++) {
      answer += S[i];
    }
    answer += "i";
    cout << answer << endl;
  }
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}