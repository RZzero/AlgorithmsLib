// #include <bits/stdc++.h>
#include </Users/rsuazo/bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int N;
  cin >> N;
  map<int,int> mapa;
  for(int i = 0; i < N; i++){
    int dum; cin >> dum;
    mapa[dum]++;
  }

  bool ok = true;
  for(auto &G: mapa){
    // ¿Cómo decido cuanta gente hay en mi grupo?
    int currentGroupSize = mapa[G.first] >= G.first ? G.first : mapa[G.first];
    
    int quantityDifferingCurrent = N-(mapa[G.first]-currentGroupSize);
    if (quantityDifferingCurrent != G.first) ok = false;

    cout << "currentKey " << G.first << endl;
    cout << "currentGroupSize " << currentGroupSize << endl;
    cout << "quantityDifferingCurrent " << quantityDifferingCurrent << endl;
  }

  if (!ok) cout << "Impossible" << endl;
  else {
    cout << "Possible" << endl;
  }
  return 0;
}