#include <bits/stdc++.h>
using namespace std;

int main(){
  int T;
  int AS, Negate;
  cin >> T;
  for(int i = 0; i < T; i++){
    cin >> AS >> Negate;
    vector<int> V (AS);
    for(auto &l: V) cin >> l;

    sort(V.begin(), V.end());
      
    for(int j = 0; j < Negate; j++){
      V[j] = V[j] * -1;
    }
    int sum = 0;
    for(auto &l : V) sum+= l;
    cout << sum << endl;
  }

  return 0;
}
