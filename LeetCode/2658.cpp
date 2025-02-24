#include <bits/stdc++.h>

using namespace std;
vector<int> dirX = {0, 1, 0, -1};
vector<int> dirY = {1, 0, -1, 0};
vector<vector<bool>> visited;

bool is_valid_coordinate(int i, int j, int M, int N) {
  return i >= 0 && i < M && j >= 0 && j < N;
}

int flood_fill(int i, int j, int M, int N, vector<vector<int>> &grid) {
  if (!is_valid_coordinate(i, j, M, N) || visited[i][j] || !grid[i][j])
    return 0;
  visited[i][j] = true;
  int answer = grid[i][j];

  for (int k = 0; k < 4; k++) {
    int new_x = i + dirX[k];
    int new_y = j + dirY[k];
    answer += flood_fill(new_x, new_y, M, N, grid);
  }
  return answer;
}

int findMaxFish(vector<vector<int>> &grid) {
  int answer = 0;
  int M = grid.size();
  int N = grid[0].size();
  visited = vector<vector<bool>>(M);
  for (int i = 0; i < visited.size(); i++) {
    visited[i] = vector<bool>(N, 0);
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (!visited[i][j] && grid[i][j]) {
        answer = max(answer, flood_fill(i, j, M, N, grid));
      }
    }
  }

  return answer;
}

int main() {
  vector<vector<vector<int>>> test_cases = {
      {{0, 2, 1, 0}, {4, 0, 0, 3}, {1, 0, 0, 4}, {0, 3, 2, 0}},
      {{1, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 1}},
  };

  for (auto &t : test_cases) {
    cout << findMaxFish(t) << endl;
  }
  return 0;
}