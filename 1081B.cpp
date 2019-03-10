#include <bits/stdc++.h>

using namespace std;
using Long = long long;
int main(){
  int N;
  cin >> N;
  Long sum = 0;
  map<int, int> mapa;
  vector<int> order;
  vector<int> vis(1e6, 0);
  for(int i = 0; i < N; i++){
    int dum; cin >> dum;
    sum++;
    mapa[dum]++;
    order.push_back(dum);
  }

  bool ok = true;

  for(auto &l : mapa){
    if(sum - (l.second) != l.first){
      ok = false;
      break;
    }
  }

  if(!ok) {
    cout << "Impossible" << endl;
  }else {
    cout << "Possible" << endl;
    int k = 0;
    for(int i = 0; i < order.size(); i++){
      if (!vis[order[i]]){
        k++;
        cout << k << " ";
        vis[order[i]] = 1;
      }else {
        cout << k <<  " ";
      }
    }
  } 
  return 0;
}