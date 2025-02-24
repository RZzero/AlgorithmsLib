#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N;
  map<int, int> mapa;
  cin >> N;

  Long answer = 0;
  for (int i = 1; i <= N; i++) {
    int r;
    cin >> r;
    if (mapa[r - i]) {
      answer += mapa[r - i];
    }
    mapa[r - i]++;
  }

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;
  // T = 1;
  while (T--) {
    solve();
  }
}