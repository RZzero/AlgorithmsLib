// https://onlinejudge.org/external/103/10324.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  // freopen("10324.in", "r", stdin);
  // freopen("10324.out", "w", stdout);
  string s;

  int counter = 1;
  while (cin >> s) {
    int T; cin >> T;

    cout << "Case " << counter << ":" << endl;
    for (int i = 0; i < T; i++) {
      int L,R;
      cin >> L >> R;
      bool can = true;
      int l = min(L,R);
      int r = max(L,R);
      for (int j = l+1; j <= r; j++) {
        if (s[j] != s[j-1])
          can = false;
      }
      if (can) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
    counter++;
  }
  return 0;
}
