// https://onlinejudge.org/external/123/12372.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;

  cin >> T;
  for (int i = 1; i <= T; i++) {
    int L, W, H;
    cin >> L >> W >> H;

    bool can = false;
    if (L <= 20 && W <= 20 && H <= 20) {
      can = true;
    }
    string answer = can ? "good" : "bad";
    cout << "Case " << i << ": " << answer << endl;
  }
  return 0;
}
