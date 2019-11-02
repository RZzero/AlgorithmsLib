#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;


  cin >> N;
  for(int k = 0; k < N; k++){
    int gg, cc; cin >> gg >> cc;

    string S, Cost, want;
    cin >> S >> Cost >> want;
    map <char, int> mapa;

    for(int i = 0; i < S.size(); i++){
      if (mapa.count(S[i])) {
        mapa[S[i]] = min(mapa[S[i]], Cost[i]-'0');
      } else {
        mapa[S[i]] = Cost[i]-'0';
      }
    }
    
    // for(auto &l: mapa) cout << l.second << endl;
    int elCost = 0;
    for(int i =0; i < want.size(); i++){
      if(!mapa.count(want[i])){
        elCost = -1;
        break;
      }else{
        elCost+= mapa[want[i]];
      }
    }
    if(elCost == -1){
      cout << -1 << endl;
    }else{
      cout << elCost << endl;
    }
  }

  return 0;
}
