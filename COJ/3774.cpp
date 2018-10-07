#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI vis1;
VI vis2;
VI DP1;
VI DP2;
VI Value;
int N;
void DFS1(int u){
  vis1[u] = 1;
  int max1 = Value[u];
  for(int v: adj[u]){
    if(vis1[v]) continue;
    DFS1(v);
    max1 = max(max1, DP1[v]);
  }
  DP1[u] = max1;
}

void DFS2(int u, int max1){
  vis2[u] = 1;
  for(int v: adj[u]){
    if(vis2[v]) continue;
    DFS2(v, max(max1, Value[u]));
  }
  DP2[u] = max(max1, Value[u]);
}
int main(){
  cin >> N;
  adj = VII(N);
  vis1 = VI(N);
  vis2 = VI(N);
  DP1 = VI(N);
  DP2 = VI(N);
  Value = VI(N);
  for(int i = 0; i < N; i++){
    int dum; cin >> dum;
    Value[i] = dum;
  }
  for(int i = 0; i < N-1; i++){
    // cout << i << endl;
    int u, v;
    cin >> u >> v;
    u--; v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  DFS1(0);
  DFS2(0, Value[0]);
  int anw = 1e9;
  for(int u = 0; u < N; u++){
    if(Value[u] >= DP1[u] && Value[u] >= DP2[u]){
      anw = min(anw, Value[u]);
    }
  }
  cout << anw << endl;
  return 0;
}