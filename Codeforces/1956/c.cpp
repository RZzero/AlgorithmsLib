#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;

    if (N == 1) {
      cout << "1 1" << endl;
      cout << "1 1 1" << endl;
    } else if (N == 2) {
      cout << "7 3" << endl;
      cout << "1 1 1 2" << endl;
      cout << "1 2 1 2" << endl;
      cout << "2 1 1 2" << endl;
    } else {
      Long sum = 0;
      int TABLE[N + 1][N + 1];
      memset(TABLE, 0, sizeof(TABLE));
      Long cur = N / 2;

      sum += (cur * (cur + 1)) / 2 + (cur * N) + (cur * N - 1);
      for (int i = 0; i < N; i++) {
        sum += pow(2, i) * ((i + 1) + (i != 0 ? 1 : 0));
      }
    }
  }
  return 0;
}