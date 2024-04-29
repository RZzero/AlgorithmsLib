#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int N, M;
char grid[1000 + 7][1000 + 7];
int visited[1000 + 7][1000 + 7];
vector<int> dirX = {0, 0, 1, -1};
vector<int> dirY = {1, -1, 0, 0};

int degrees[1000 + 7][1000 + 7];

void print(int R, int C) {
  for (int i = 1; i <= R; i++) {
    for (int j = 1; j <= C; j++) {
      cerr << degrees[i][j] << " ";
    }
    cerr << endl;
  }
  cerr << endl;
}

bool is_limited(int i, int j) {
  bool limited = false;
  for (int k = 0; k < 4; k++) {
    char next_to_visit = grid[i + dirX[k]][j + dirY[k]];
    if (next_to_visit == '#') {
      limited |= true;
    }
  }
  return limited;
}

Long DFS(int i, int j, int dfs_time) {
  visited[i][j] = !is_limited(i, j) ? true : dfs_time;
  degrees[i][j] = dfs_time;
  if (is_limited(i, j))
    return 1;

  int current_count = 1;

  for (int k = 0; k < 4; k++) {
    int next_i = i + dirX[k];
    int next_j = j + dirY[k];
    char next_to_visit = grid[next_i][next_j];

    bool can_next_to_visit = !is_limited(next_i, next_j)
                                 ? visited[next_i][next_j] == false
                                 : visited[next_i][next_j] < dfs_time;

    if (next_to_visit == '.' && can_next_to_visit) {
      current_count += DFS(next_i, next_j, dfs_time);
    }
  }

  // cerr << "current_count " << current_count << endl;
  return current_count;
}

int main() {
  cin >> N >> M;
  memset(grid, 'X', sizeof(grid));
  memset(visited, false, sizeof(visited));
  memset(degrees, false, sizeof(degrees));

  bool has_point = false;
  for (int i = 1; i <= N; i++) {
    string S;
    cin >> S;
    for (int j = 0; j < S.size(); j++) {
      grid[i][j + 1] = S[j];
      has_point |= S[j] == '.';
    }
  }

  Long answer = has_point;
  int dfs_time = 1;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= M; j++) {
      if (!visited[i][j] && grid[i][j] == '.') {
        // cerr << answer << " " << i << " " << j << endl;
        answer = max(answer, DFS(i, j, dfs_time));
        // cerr << answer << endl;
        // print(N, M);
        dfs_time++;
      }
    }
  }

  cout << answer << endl;
  return 0;
}