#include <bits/stdc++.h>
  
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);cin.tie(0);
  int Q;
  cin >> Q;
  while(Q--){
    int N;
    cin >> N;
    map<int,int> candies;
    for(int i = 0; i < N; i++){
      int dum; cin >> dum;
      candies[dum]++;
    }
    map<int,int> frq;
    int max_repeat = 0;
    for (auto &c: candies) {
      frq[c.second]++;
      max_repeat = max(max_repeat,frq[c.second]);
    }
    cout << max_repeat << endl;
    // for(int i = max_repeat; i > 0; i--) {
    //   if (frq.count(i) == 0) frq[i] = 0;
    // }

    // int sum = 0;
    // int await = 0;
    // for (auto it = frq.rbegin(); it != frq.rend(); ++it) {
    //   cout << " it->first " <<  it->first << " await " << await << endl;
    //   sum += max(it->first, await);
    //   await = max(await-1, it->first-1);
    // }
    // cout << sum << endl;
  }
  return 0;
}