#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    map <int,int> mapa;
    int n;  
    for (int i = 0; i < N; i++) {
      cin >> n;
      if (!mapa.count(n)) {
        mapa[n] = 1;
      } else {
        mapa[n]++;
      }
    }

    bool found = false;
    for (auto [number, cnt]: mapa) {
      if (cnt >= 3) {
        cout << number << endl;
        found = true;
        break;
      }
    }

    if (!found) cout << -1 << endl;
  }
  return 0;
}