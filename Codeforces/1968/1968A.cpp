#include <bits/stdc++.h>
using namespace std;

map<int, pair<int, int>> gcded;

void solve() {
  int N;
  cin >> N;
  cout << gcded[N].first << endl;
}

int main() {

  int T;
  cin >> T;

  for (unsigned int i = 2; i <= 1000; i++) {
    for (unsigned int j = i - 1; j > 0; j--) {
      if (!gcded.count(i)) {
        gcded[i] = {j, (int)__gcd(i, j) + j};
      } else {
        int current = __gcd(i, j) + j;
        if (current > gcded[i].second) {
          gcded[i] = {j, current};
        }
      }
      // cerr << gcded[i] << " ";
    }
    // cerr << endl;
  }
  while (T--) {
    solve();
  }
  return 0;
}