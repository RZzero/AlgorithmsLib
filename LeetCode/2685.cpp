
#include <bits/stdc++.h>
using namespace std;

// Vector of nodes for each component
// Each node of || A component || must have N-1 edges in their adjacency list.
vector<vector<int>> component;
vector<vector<int>> adj;
vector<int> vis;
int component_id;

void DFS(int u) {
  vis[u] = true;
  component.back().push_back(u);
  for (auto &v : adj[u]) {
    if (vis[v])
      continue;
    DFS(v);
  }
}

int countCompleteComponents(int n, vector<vector<int>> &edges) {
  vis = vector<int>(n, 0);
  adj = vector<vector<int>>(n);
  component.clear();
  component_id = 0;
  for (auto &edge : edges) {
    adj[edge[0]].push_back(edge[1]);
    adj[edge[1]].push_back(edge[0]);
  }

  for (int i = 0; i < n; i++) {
    if (vis[i])
      continue;
    component.push_back({});
    DFS(i);
    component_id++;
  }

  int answer = 0;

  for (auto &component_nodes : component) {
    bool can = true;
    int nodes_in_component = component_nodes.size();
    for (auto &node : component_nodes) {
      can &= adj[node].size() == nodes_in_component - 1;
    }
    answer += can;
  }

  return answer;
}

int main() {
  vector<pair<int, vector<vector<int>>>> test_cases = {
      {6, {{0, 1}, {0, 2}, {1, 2}, {3, 4}}},
      {6, {{0, 1}, {0, 2}, {1, 2}, {3, 4}, {3, 5}}},
  };

  for (auto &t : test_cases) {
    cout << countCompleteComponents(t.first, t.second) << endl;
  }
  return 0;
}