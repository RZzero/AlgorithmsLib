// https://cses.fi/problemset/task/1666/
#include <bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VII;

void DFS(VII &adj, VI &vis, int &u) {
  vis[u] = true;
  for (auto v: adj[u]) {
    if (vis[v]) continue;
    DFS(adj, vis, v);
  }
}

int main () {
  int N, M;
  cin >> N >> M;
  VII adj = VII(N);
  VI vis = VI(N, 0);

  for (int i = 0; i < M; i++) {
    int u,v; cin >> u >> v;
    u--; v--;
    adj[u].push_back(v); 
    adj[v].push_back(u); 
  }

  int components_cnt = 0;
  VI components_representative;
  for (int u = 0; u < N; u++) {
    if (!vis[u]) {
      DFS(adj, vis, u);
      components_cnt++;
      components_representative.push_back(u+1);
    }
  }

  cout << components_cnt - 1 << endl;
  for (int i = 1; i < components_representative.size(); i++) {
    cout << components_representative[i-1] << " " << components_representative[i] << endl;
  }
  return 0;
}
