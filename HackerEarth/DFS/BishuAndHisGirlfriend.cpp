#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI vis;
VI dis;
VI girls;

void DFS(int u, int cnt = 0){
  vis[u] = 1;
  dis[u] = cnt;
  for(auto v: adj[u]){
    if(vis[v]) continue;
    DFS(v, cnt + 1);
  }
}

int main(){
  int C, G;
  cin >> C;
  adj = VII(C + 1);
  vis = VI(C + 1);
  dis = VI(C + 1);
  girls = VI(C + 1);

  for(int i = 1; i < C; i++){
    int u,v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  cin >> G;
  for(int i = 0; i < G; i++){
    int u; cin >> u;
    girls[u] = 1;
  }

  DFS(1);
  
  int nodeGirlfriendLives = 1e9;
  int maxi = 1e9;
  for(int u = 1; u <= C; u++){
    if(!girls[u]) continue;
    if(dis[u] == maxi) {
      nodeGirlfriendLives = min(u, nodeGirlfriendLives);
    }else if(dis[u] < maxi){
      nodeGirlfriendLives = u;
      maxi = dis[u];
    }
  }
  cout << nodeGirlfriendLives << endl;
  return 0;
}