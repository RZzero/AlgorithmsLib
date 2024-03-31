#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N, K;
    cin >> N >> K;

    if (N == K) {
      for (int i = 0; i < N; i++) {
        cout << 1 << " ";
      }
    } else if (K == 1) {
      cout << 1000000 << " ";
      for (int i = 1; i < N; i++) {
        cout << 1 << " ";
      }
    } else {
      cout << -1 << endl;
    }

    cout << endl;
  }
  return 0;
}