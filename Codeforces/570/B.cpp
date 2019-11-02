#include <bits/stdc++.h>
  
using namespace std;

int main() {
  int Q;
  cin >> Q;

  while (Q--) {
    long long N, K;
    cin >> N >> K;
    long long mini = 2 * 1e18, maxi = -mini;
    vector<long long> V(N);
    for(int i = 0; i < N; i++){
      long long dum; cin >> dum;
      V[i] = dum;
      mini = min(mini, V[i]);
      maxi = max(maxi, V[i]);
    }

    long long miniAns = mini + K;
    bool canWithMini = abs(mini-miniAns) <= K && abs(maxi-miniAns) <= K;
    if (K >= maxi && canWithMini) {
      cout << max(miniAns, maxi) << endl;
    } else if (K >= maxi) cout << maxi << endl;
    else if(canWithMini) cout << miniAns << endl;
    else cout << -1 << endl;
  }
  return 0;
}