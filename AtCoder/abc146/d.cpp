#include <bits/stdc++.h>
using namespace std;
using VI = vector<int>;
using VII = vector<VI>;
int N;
VI vis_bfs;
VII adj;
int max_colors = 0;
VI answer;
struct Edge {
  int idx, u, v;
};
vector<Edge> edges;

int main() {
  cin >> N;
  adj = VII(N);
  vis_bfs = VI(N, 0);

  for (int i = 0; i < N - 1; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
    edges.push_back({i, u, v});
  }

  for (int u = 0; u < N; u++) {
    max_colors = max(max_colors, (int)adj[u].size());
  }

  queue<int> q;
  q.push(0);
  vis_bfs[0] = true;
  map<pair<int, int>, int> color_for_edge;
  int current_color = 0;
  vector<int> parent(N, -1);
  parent[0] = -1;
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int v : adj[u]) {
      if (!vis_bfs[v]) {
        vis_bfs[v] = true;
        parent[v] = u;

        if (parent[u] != -1) {
          int grandparent = parent[u];
          current_color += color_for_edge[{min(u, grandparent), max(u, grandparent)}] == (current_color % max_colors);
        }

        q.push(v);
        color_for_edge[{min(u, v), max(u, v)}] = current_color % max_colors;

        current_color++;
      }
    }
  }

  cout << max_colors << endl;
  for (int i = 0; i < edges.size(); i++) {
    auto &edge = edges[i];
    cout << color_for_edge[{min(edge.u, edge.v), max(edge.u, edge.v)}] + 1 << endl;
  }
  return 0;
}