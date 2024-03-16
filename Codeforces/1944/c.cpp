#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;

    vector<int> a(N);
    vector<int> have(N + 1);
    for (int i = 0; i < N; i++) {
      cin >> a[i];
      have[a[i]]++;
    }

    int mex = 0;
    bool alice_turn = true;
    while (have[mex] && alice_turn || (!alice_turn && have[mex] > 1)) {
      if (have[mex] > 1 && alice_turn) {
        while (have[mex] && have[mex] > 1) {
          mex += 1;
        }
        continue;
      }

      if (!alice_turn && have[mex]) {
        while (have[mex] && have[mex] > 1) {
          mex += 1;
        }
        if (have[mex] == 0 || have[mex] == 1) {
          break;
        }
      }
      mex += 1;
      alice_turn = !alice_turn;
    }
    cout << mex << endl;
  }
  return 0;
}