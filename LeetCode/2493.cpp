#include <bits/stdc++.h>
using namespace std;

vector<int> visited;
vector<vector<int>> adj;
set<int> counting;
int farthest = -1;
int max_distance = 0;

bool DFS(int u, int p, int distance) {
  visited[u] = true;
  counting.insert(u);

  if (distance > max_distance) {
    farthest = u;
    max_distance = distance;
  }

  bool has_cycle = false;
  for (auto &v : adj[u]) {
    if (!visited[v])
      has_cycle = DFS(v, u, distance + 1);
    else if (v != p) {
      has_cycle |= true;
    }
  }

  return has_cycle;
}

int magnificentSets(int n, vector<vector<int>> &edges) {
  int answer = 0;
  visited = vector<int>(n, 0);
  adj = vector<vector<int>>(n);
  for (auto &edge : edges) {
    int u = edge[0];
    int v = edge[1];
    u--;
    v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  bool has_cycle = false;
  int connected_components = 0;
  int floating = 0;
  for (int i = 0; i < n; i++) {
    if (!counting.count(i)) {
      if (adj[i].size() == 0) {
        counting.insert(i);
        floating++;
        continue;
      }
      max_distance = 0;
      farthest = -1;
      has_cycle |= DFS(i, -1, 0);

      visited.clear();
      cerr << "farthest: " << farthest << " ";
      DFS(farthest, -1, 0);

      answer += max_distance + 1;
      connected_components++;
    }
  }
  cerr << endl;
  cerr << "connected -> " << connected_components << endl;
  cerr << "floating -> " << floating << endl;
  answer += (floating);
  if (has_cycle || !answer)
    return -1;
  return answer;
}

int main() {
  vector<pair<int, vector<vector<int>>>> test_cases = {
      {{6}, {{1, 2}, {1, 4}, {1, 5}, {2, 6}, {2, 3}, {4, 6}}},
      {{3}, {{1, 2}, {2, 3}, {3, 1}}},
      {{92}, {{67, 29}, {13, 29}, {77, 29}, {36, 29}, {82, 29}, {54, 29}, {57, 29}, {53, 29}, {68, 29}, {26, 29}, {21, 29}, {46, 29}, {41, 29}, {45, 29}, {56, 29}, {88, 29}, {2, 29}, {7, 29}, {5, 29}, {16, 29}, {37, 29}, {50, 29}, {79, 29}, {91, 29}, {48, 29}, {87, 29}, {25, 29}, {80, 29}, {71, 29}, {9, 29}, {78, 29}, {33, 29}, {4, 29}, {44, 29}, {72, 29}, {65, 29}, {61, 29}}},
  };

  for (auto &t : test_cases) {
    cout << magnificentSets(t.first, t.second) << endl;
  }

  return 0;
}