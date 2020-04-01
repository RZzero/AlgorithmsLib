#include "/Users/rsuazo/bits/stdc++.h"
// #include <bits/stdc++.h>
using namespace std;

set<int> combPrime;

void primeDecomp(int n) {
  for (int i = 2; i * i <= n; ++i){
    while (n % i == 0){
      combPrime.insert(i);
        n /= i;
    }
  }

  if (n > 1)
    combPrime.insert(n);
}

int main (){
  int P;
  cin >> P;
  int maxLeft = -1, maxRight = -1;
  vector<pair<int,int>> Pairs;

  for(int i = 0; i < P; i++) {
    int L,R; cin >> L >> R;
    Pairs.push_back({L , R});
    maxLeft = max(maxLeft, L);
    maxRight = max(maxRight, R);
  }

  primeDecomp(Pairs[0].first);
  primeDecomp(Pairs[0].second);

  for(auto prime: combPrime) {
    bool can = true;

    for (auto pair: Pairs) {
      if (pair.first % prime == 0 || pair.second % prime == 0) continue;
      can = false;
      break;
    }
    if (can) {
      cout << prime << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
