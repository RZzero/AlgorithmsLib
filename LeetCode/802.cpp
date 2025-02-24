#include <bits/stdc++.h>
using namespace std;

vector<int> eventualSafeNodes(vector<vector<int>> &graph) {
  vector<int> answer;
  vector<bool> visited(graph.size(), 0);
  vector<bool> part_of_a_cycle(graph.size(), 0);

  auto DFS = [](auto &self,
                int u,
                vector<vector<int>> &graph,
                vector<bool> &visited,
                vector<bool> &part_of_a_cycle) -> bool {
    if (part_of_a_cycle[u])
      return true;

    if (visited[u]) {
      return false;
    }
    visited[u] = true;
    part_of_a_cycle[u] = true;
    for (auto v : graph[u]) {

      if (self(self, v, graph, visited, part_of_a_cycle)) {
        return true;
      }
    }
    part_of_a_cycle[u] = false;
    return part_of_a_cycle[u];
  };

  for (int i = 0; i < graph.size(); i++) {
    if (!visited[i]) {
      DFS(DFS, i, graph, visited, part_of_a_cycle);
    }
  }

  for (int i = 0; i < graph.size(); i++) {
    if (!part_of_a_cycle[i])
      answer.push_back(i);
  }

  return answer;
}

int main() {
  vector<vector<vector<int>>> test_cases = {
      {{1, 2}, {2, 3}, {5}, {0}, {5}, {}, {}},
      {{1, 2, 3, 4}, {1, 2}, {3, 4}, {0, 4}, {}},
  };

  for (auto &t : test_cases) {
    vector<int> answer = eventualSafeNodes(t);
    for (auto &tt : answer) {
      cerr << tt << " ";
    }
    cerr << endl;
  }
  return 0;
}