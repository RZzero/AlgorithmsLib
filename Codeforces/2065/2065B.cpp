#include <bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;
  int index = -1;

  for (int i = 1; i < (int)S.size(); i++) {
    if (S[i] == S[i - 1]) {
      index = i + 1;
    }
  }

  if (index == -1) {
    cout << S.size() << endl;
  } else {
    cout << 1 << endl;
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