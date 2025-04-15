#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
vector<vector<int>> components; // which nodes are part of components[i]
vector<int> component_for_u;
map<pair<int, int>, int> cost; // cost of the edge between u and v. NOTE: If there is already an edge between u and v I can compress it by just & the values and assume there is only one edge.
map<int, int> cost_for_component;
int component_id;

int DFS(int u, int accumulated_cost = -1) {
  vis[u] = true;
  components.back().push_back(u);
  component_for_u[u] = component_id;
  for (auto &v : adj[u]) {
    accumulated_cost = accumulated_cost == -1 ? cost[{min(u, v), max(u, v)}] : accumulated_cost & cost[{min(u, v), max(u, v)}];

    if (vis[v])
      continue;

    accumulated_cost &= DFS(v, accumulated_cost);
  }

  return accumulated_cost;
}

vector<int> minimumCost(int n, vector<vector<int>> &edges, vector<vector<int>> &query) {
  adj = vector<vector<int>>(n);
  vis = vector<int>(n, 0);
  component_for_u = vector<int>(n);
  cost.clear();
  components.clear();
  cost_for_component.clear();
  component_id = 0;

  for (auto &edge : edges) {
    int u = edge[0];
    int v = edge[1];
    int c = edge[2];
    pair<int, int> cur_pair = {min(u, v), max(u, v)};
    // cerr <<
    if (cost.count(cur_pair)) {
      cost[cur_pair] = cost[cur_pair] & c;
    } else {
      cost[cur_pair] = c;
    }

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int u = 0; u < n; u++) {
    if (vis[u])
      continue;
    components.push_back({});
    cost_for_component[component_id] = DFS(u);
    component_id++;
  }

  vector<int> answer;
  for (auto &q : query) {
    int u = q[0];
    int v = q[1];
    if (component_for_u[u] != component_for_u[v]) {
      answer.push_back(-1);
    } else {
      answer.push_back(cost_for_component[component_for_u[u]]);
    }
  }
  return answer;
}

int main() {
  vector<tuple<int, vector<vector<int>>, vector<vector<int>>>> test_cases = {
      // {5, {{0, 1, 7}, {1, 3, 7}, {1, 2, 1}}, {{0, 3}, {3, 4}}},
      // {3, {{0, 2, 7}, {0, 1, 15}, {1, 2, 6}, {1, 2, 1}}, {{1, 2}}},
      {6, {{1, 5, 1}, {4, 3, 3}, {3, 5, 3}, {1, 0, 1}, {3, 0, 0}}, {{0, 2}, {4, 5}, {5, 1}, {0, 4}, {0, 1}, {0, 4}, {4, 2}, {4, 0}}},
  };

  for (auto &t : test_cases) {
    auto [n, edges, query] = t;
    vector<int> answer = minimumCost(n, edges, query);
    for (auto &q : answer) {
      cout << q << " ";
    }
    cout << endl;
  }
  return 0;
}
