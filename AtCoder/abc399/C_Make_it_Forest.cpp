#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<bool> visited(N, 0);
  vector<vector<int>> adj = vector<vector<int>>(N);
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  queue<int> Q;

  Q.push(0);
  int answer = 0;
  int edges_used = 0;
  visited[0] = true;
  while (Q.size()) {
    int u = Q.front();
    Q.pop();

    for (auto &v : adj[u]) {
      if (!visited[v]) {
        visited[v] = true;
        Q.push(v);
        edges_used++;
      }
    }
    // cerr << "edges_used " << edges_used << endl;
  }
  answer = edges_used == M || edges_used == 0 ? 0 : M - edges_used;
  cout << answer << endl;
  return 0;
}