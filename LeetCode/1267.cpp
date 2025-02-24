#include <bits/stdc++.h>
using namespace std;

int countServers(vector<vector<int>> &grid) {

  int M = grid.size();
  int N = grid[0].size();
  vector<int> row_cnt(M, 0);
  vector<int> column_cnt(N, 0);

  int absolute_count = 0;
  for (int i = 0; i < M; i++) {
    int total_row_count = 0;
    for (int j = 0; j < N; j++) {
      if (grid[i][j]) {
        total_row_count++;
        absolute_count++;
      }
    }
    row_cnt[i] = total_row_count;
  }

  for (int j = 0; j < N; j++) {
    int total_col_count = 0;
    for (int i = 0; i < M; i++) {
      if (grid[i][j])
        total_col_count++;
    }
    column_cnt[j] = total_col_count;
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (grid[i][j] && row_cnt[i] == 1 && column_cnt[j] == 1) {
        absolute_count--;
      }
    }
  }
  return absolute_count;
}

int main() {
  vector<vector<vector<int>>> test_cases = {
      {{1, 0}, {0, 1}},
      {{1, 0}, {1, 1}},
      {{1, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}},
      {{1, 0, 0, 1, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 1, 0}}};

  for (auto &t : test_cases) {
    cout << countServers(t) << endl;
  }
  return 0;
}