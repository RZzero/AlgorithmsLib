#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;
  while (T--) {
    int N, K, X;
    cin >> N >> K >> X;

    int MEX = K-1;
    if (N <= MEX || MEX > X) {
      cout << -1 << endl;
      // return 0;
    } else {
      int answer = (MEX * (MEX + 1)) / 2;
      int left = N - MEX - 1;
      if (left > 0) {
        int best_to_add = X == K ? MEX : X;
        answer += (left * best_to_add);
      }
      cout << answer << endl;
    }
  }
  return 0;
}