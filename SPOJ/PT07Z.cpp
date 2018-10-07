#include <bits/stdc++.h>
using namespace std;
using VI = vector<int>;
using VII = vector<VI>;

VII adj;
VI vis;
VI vis2;
VI dis;
VI dis2;

void DFS(int u, int cnt, vector<int> &distance, vector<int> &visited){
  visited[u] = 1;
  distance[u] = cnt;
  for(auto v: adj[u]){
    if(visited[v]) continue;
    DFS(v, cnt + 1, distance, visited);
  }
}

int main(){
  int N;
  cin >> N;
  adj = VII(N + 1);
  vis = VI(N + 1);
  vis2 = VI(N + 1);
  dis = VI(N + 1);
  dis2 = VI(N + 1);

  for(int i = 1; i < N; i++){
    int u,v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  DFS(1, 0, dis, vis);
  int farthest_node = -1;
  int max_distance_from_first_node = 0;
  for(int u = 1; u <= N; u++){
    if(dis[u] > max_distance_from_first_node){
      farthest_node = u;
      max_distance_from_first_node = dis[u];
    }
  }

  DFS(farthest_node, 0, dis2, vis2);
  int answer = -1;
  for(int u = 1; u <= N; u++){
    answer = max(dis2[u], answer);
  }
  cout << answer << endl;

  return 0;
}