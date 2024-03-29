#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using VI = vector<int>;
using VII = vector<VI>;
VII adj;
VI vis;
string coloring;
Long answer;
VI subtree_size;
VI whites_for_subtree;
VI blacks_for_subtree;

void DFS(int u = 0) {
  vis[u] = true;
  subtree_size[u] = 1;
  whites_for_subtree[u] = coloring[u] == 'W' ? 1 : 0;
  blacks_for_subtree[u] = coloring[u] == 'B' ? 1 : 0;

  for (auto v : adj[u]) {
    if (vis[v])
      continue;
    DFS(v);
    whites_for_subtree[u] += whites_for_subtree[v];
    blacks_for_subtree[u] += blacks_for_subtree[v];
    subtree_size[u] += subtree_size[v];
  }

  if (subtree_size[u] % 2 == 0 && whites_for_subtree[u] == blacks_for_subtree[u]) {
    answer++;
  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    vector<int> A(N - 1);
    for (auto &p : A)
      cin >> p;

    answer = 0;
    cin >> coloring;
    adj = VII(N);
    vis = VI(N, 0);
    subtree_size = VI(N, 0);
    whites_for_subtree = VI(N, 0);
    blacks_for_subtree = VI(N, 0);

    for (int i = 0; i < A.size(); i++) {
      int current_node = i + 1;
      int parent = A[i] - 1;
      adj[current_node].push_back(parent);
      adj[parent].push_back(current_node);
    }

    // Long answer = 0;

    DFS(0);
    cout << answer << endl;
  }
  return 0;
}

/*
1
7
1 1 2 3 3 5
WBBWWBW
*/