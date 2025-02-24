#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> gives;

void solve() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  auto it = S.find("...");

  if (it != string::npos) {
    cout << 2 << endl;
  } else {
    int dots = 0;
    for (int i = 0; i < N; i++) {
      dots += S[i] == '.';
    }
    cout << dots << endl;
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