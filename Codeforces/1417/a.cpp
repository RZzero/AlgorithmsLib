// https://codeforces.com/problemset/problem/1417/A
#include <bits/stdc++.h>

using namespace std;
typedef long long Long;
int main () {
  int T;
  cin >> T;

  while (T--) {
    int N, K;
    cin >> N >> K;
    vector<int> piles(N);
    int mini = INT_MAX;
    int ignore_i = -1;
    for (int i = 0; i < N; i++) {
      int dum; cin >> dum;
      if (dum < mini) {
        mini = min(mini, dum);
        ignore_i = i;
      }
      piles[i] = dum;
    }
    
    Long answer = 0;
    for (int i = 0; i < N; i++) {
      if (i == ignore_i) continue;
      answer += (K-piles[i]) / mini;
      piles[i] = piles[i] + (K-piles[i]) / mini;
    }

    // for (int i = 0; i < N; i++) {
    //   if (i == ignore_i) continue;
    //   if (piles[ignore_i] + piles[i] <= K) {
    //     answer++;
    //   }
    // }
    cout << answer << endl;
  }
  return 0;
}
