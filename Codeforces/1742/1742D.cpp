#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;

  map<Long, Long> mapa;
  for (Long i = 0; i < N; i++) {
    Long dum;
    cin >> dum;
    mapa[dum] = i + 1;
  }

  long long answer = -1;
  for (auto &el1 : mapa) {
    for (auto &el2 : mapa) {
      unsigned long long gcded = __gcd((unsigned long long)el1.first, (unsigned long long)el2.first);
      if (gcded == 1) {
        answer = max(answer, el2.second * 1LL + el1.second * 1LL);
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