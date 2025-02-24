#include <bits/stdc++.h>
using namespace std;

vector<int> findRedundantConnection(vector<vector<int>> &edges) {
  vector<bool> visited(edges.size(), 0);
  vector<vector<int>> adj(edges.size());

  for (auto &edge : edges) {
    int u = edge[0];
    int v = edge[1];
    u--;
    v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  auto DFS = [](auto &self, int u, int p, vector<vector<int>> &adj, vector<bool> &visited, set<pair<int, int>> &possibles) -> void {
    visited[u] = true;
    possibles.insert({min(u, p) + 1, max(u, p) + 1});

    for (auto v : adj[u]) {
      if (!visited[v]) {
        self(self, v, u, adj, visited, possibles);
      } else if (v != p) {
        return;
        // possibles.insert({min(u, v) + 1, max(u, v) + 1});
      }
    }

    possibles.erase({min(u, p) + 1, max(u, p) + 1});
  };

  set<pair<int, int>> possibles;
  DFS(DFS, edges[0][0], -1, adj, visited, possibles);

  for (auto &p : possibles) {
    cerr << p.first << " " << p.second << " - ";
  }
  cerr << endl;
  vector<int> answer(2, 0);
  // for (int i = ((int)edges.size()) - 1; i >= 0; i--) {
  //   if (possibles.count({min(edges[i][0], edges[i][1]), max(edges[i][0], edges[i][1])})) {
  //     answer.push_back(edges[i][0]);
  //     answer.push_back(edges[i][1]);
  //   }
  // }
  return answer;
}

int main() {
  vector<vector<vector<int>>> test_cases = {
      {{1, 2}, {1, 3}, {2, 3}},
      {{1, 2}, {2, 3}, {3, 4}, {1, 4}, {1, 5}},
  };

  for (auto &test : test_cases) {
    vector<int> answer = findRedundantConnection(test);
    cout << answer[0] << " " << answer[1] << endl;
  }
  return 0;
}