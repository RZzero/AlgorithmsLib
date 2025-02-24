#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> gives;

void solve() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int cnt = 0;

  for (int i = 1; i < N; i += 2) {
    cnt += S[i - 1] != S[i];
  }
  cout << cnt << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}