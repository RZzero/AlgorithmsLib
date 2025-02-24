#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

bool is_valid(int i, int j, int &N, int &M) {
  return ((i >= 0 && i < N) && (j >= 0 && j < M));
}

void solve() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> table(N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int cur;
      cin >> cur;
      table[i].push_back(cur);
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int mx = 0;
      for (int k = 0; k < 4; k++) {
        if (is_valid(i + dx[k], j + dy[k], N, M)) {
          mx = max(mx, table[i + dx[k]][j + dy[k]]);
        }
      }
      table[i][j] = min(table[i][j], mx);
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << table[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}