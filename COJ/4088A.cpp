#include <bits/stdc++.h>
using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI vis;
VI colors;
VI vis2;
int maxi = 0;
int last_node1;

void DFS1(int u, int cnt = 1){
  vis2[u] = 1;

  if(cnt >= maxi){
    last_node1 = u;
    maxi = cnt;
  }
  for(int v: adj[u]){
    if(vis2[v]) continue;
    DFS1(v, cnt + 1);
  }
}

void DFS2(int u, int cnt = 1){
  vis[u] = 1;
  vis2[u] = 1;
  for(int v: adj[u]){
    if(vis[v]) continue;
    DFS2(v, cnt + 1);
  }
  maxi = max(cnt, maxi);
}


int main(){
std::ios::sync_with_stdio(false);
  int N, R;
  cin >> N >> R;
  
  adj = VII(N);
  vis = VI(N);
  colors= VI(N);
  vis2 = VI(N);

  for(int i = 0; i < R; i++){
    int u; cin >> u;
    u--;  
    colors[u] = 1;
  }

  for(int i = 0; i < N -1; i++){
    int u,v;
    cin >> u >> v;
    u--;
    v--;
    if(colors[u] && colors[v]){
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
  }

  int answer = 1;
  for(int u = 0; u < N-1; u++){
    if(vis[u]) continue;
    last_node1 = -1;
    maxi = 0;
    DFS1(u);
    maxi = 0;
    DFS2(last_node1);
    answer = max(answer, maxi);

  }
  cout << answer << endl;

  return 0;
}