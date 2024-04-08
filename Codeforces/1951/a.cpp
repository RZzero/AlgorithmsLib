#include <bits/stdc++.h>
using namespace std;

int main () {
  int T;
  cin >> T;
  while (T--) {
    int N; string S;
    cin >> N >> S;
    bool can = true;

    int one_cnt = 0;
    for (auto &s: S) {
      if (s == '1') one_cnt++;
    }

    if ((N == 1 && one_cnt) || (N == 2 && one_cnt > 0) || (one_cnt > 0 && one_cnt % 2 == 1)) {
      can = false;
    } else if (one_cnt != 0 && one_cnt % 2 == 0){
      if (one_cnt == 2) {
        for (int i = 0; i < N-1; i++) {
          if (S[i] == S[i+1] && S[i] == '1') can = false;
        }
      }
    }

    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}