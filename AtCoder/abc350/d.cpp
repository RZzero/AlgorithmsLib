#include <bits/stdc++.h>
using namespace std;
using VI = vector<int>;
using VII = vector<VI>;
using Long = long long;

int N, M;
VII adj;
VI vis;
set<int> current_vertexs;

Long DFS(int u) {
  vis[u] = 1;
  current_vertexs.insert(u);
  Long component_degree = 0;
  component_degree += adj[u].size();

  for (auto v : adj[u]) {
    if (vis[v])
      continue;
    component_degree += DFS(v);
  }

  return component_degree;
}

int main() {
  cin >> N >> M;
  adj = VII(N);
  vis = VI(N, 0);
  Long answer = 0;
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int u = 0; u < N; u++) {
    if (vis[u])
      continue;

    current_vertexs.clear();
    Long edges_used = DFS(u);
    if (edges_used) {
      edges_used = edges_used / 2;
      Long vertex_vis = current_vertexs.size();
      Long max_for_current_component = (vertex_vis * (vertex_vis - 1)) / 2;
      answer += (max_for_current_component - edges_used);
    }
  }
  cout << answer << endl;
  return 0;
}