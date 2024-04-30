#include <bits/stdc++.h>
using namespace std;

char TABLE[1000 + 7][1000 + 7];
bool vis[1000 + 7][1000 + 7];
vector<int> dirX = {0, 1, 0, -1};
vector<int> dirY = {1, 0, -1, 0};
int N, M;

void DFS(int i, int j) {
  vis[i][j] = true;
  for (int d = 0; d < 4; d++) {
    int x = i + dirX[d];
    int y = j + dirY[d];
    if (TABLE[x][y] == '.' && !vis[x][y]) {
      DFS(x, y);
    }
  }
}
int main() {
  memset(TABLE, 'X', sizeof(TABLE));
  memset(vis, false, sizeof(vis));

  cin >> N >> M;

  for (int i = 1; i <= N; i++) {
    string S;
    cin >> S;
    for (int j = 0; j < S.size(); j++) {
      TABLE[i][j + 1] = S[j];
    }
  }

  int connected_components = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= M; j++) {
      if (TABLE[i][j] == '.' && !vis[i][j]) {
        DFS(i, j);
        connected_components++;
      }
    }
  }

  cout << connected_components << endl;
  return 0;
}