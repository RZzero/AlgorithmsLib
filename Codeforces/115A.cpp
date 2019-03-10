#include <bits/stdc++.h>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VII;
VI vis;
VII adj;
VI depth;
VI isParent;

void DFS(int u, int d = 1){
  vis[u] = 1;
  depth[u] = d;
  for(auto v: adj[u]){
    if(vis[v]) continue;
    DFS(v, d + 1);
  }
}

int main(){
  int N; cin >> N;

  adj = VII(N + 1);
  vis = VI(N + 1);
  depth = VI(N + 1);
  isParent = VI(N + 1);

  for(int u = 1; u <= N; u++){
    int v;
    cin >> v;
    if (v < 0) {
      isParent[u] = 1;
    }else{
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
  }

  for(int u = 1; u <= N; u++){
    if (isParent[u] && !vis[u]) {
      DFS(u);
    }
  }

  int anw = 0;
  for(int u = 1; u <= N; u++){
    anw = max(anw, depth[u]);
  }

  cout << anw << endl;
  return 0;
}