#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VII;

VI vis;
VII adj;

void DFS (int u) {
  vis[u] = true;
  for (auto v: adj[u]) {
    if (vis[v]) continue;
    DFS(v);
  }
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);

  int N, M, selected;
  cin >> N >> M >> selected;
  selected--;

  adj = VII(N);
  vis = VI(N);

  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    adj[u].push_back(v);
  }

  DFS(selected);

  vector<int> notFirst;
  for (int i = 0; i < vis.size(); i++) {
    if (!vis[i]) notFirst.push_back(i);
  }
  int answer = 0;

  for (int u = 0; u < notFirst.size(); u++) {
    if (vis[notFirst[u]]) continue;
    DFS(notFirst[u]);
    answer++;
  }

  cout << answer << endl;
  return 0;
}
