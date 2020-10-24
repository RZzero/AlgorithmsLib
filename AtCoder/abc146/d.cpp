// #include <bits/stdc++.h>
#include <bits/stdc++.h>

using namespace std;
using Long = long long;
typedef vector<int> VI;
typedef vector<VI> VII;

VII adj;
VI vis;
int numberOfColors = 0;
int currentNumberColor = 0;
vector<set<int>> colorsForNode;

void DFS(int u, int parentColor, int currentColor) {
  vis[u] = true;
  for(auto v: adj[u]) {
    if (vis[v]) continue;
    if (currentColor == parentColor && u != 0) {
      currentColor++;
    }
    int colorForthisNode = (currentColor % numberOfColors) + 1;
    cout << colorForthisNode << endl;
    DFS(v, colorForthisNode + 1, currentColor + 1);
  }
}

int main (){
  int N;
  cin >> N;
  adj = VII(N);
  vis = VI(N, 0);
  colorsForNode = vector<set<int>>(N);
  for(int i = 0; i < N - 1; i++) {
    int u,v;
    cin >> u >> v;
    u--; v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for (int i = 0; i < adj.size(); i++){
    numberOfColors = max(numberOfColors, (int)adj[i].size());
  }

  cout << numberOfColors << endl;
  DFS(0, 0, 0);

  return 0;
}

/*
5
1 2 2 3 3 4 2 5

*/