#include <bits/stdc++.h>

using namespace std;

int main () {
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);
  int X, Y, M;

  cin >> X >> Y >> M;
  int res = 0;
  bool out = false;
  for (int i = 0; i < M; i++) {
    if (i * X > M) break;
    for (int j = 0; j < M; j++) {
      int cur = i*X + j*Y;
      if (cur > M) break;
      res = max(res, cur);
    }
  }
  cout << res << endl;
  return 0;
}