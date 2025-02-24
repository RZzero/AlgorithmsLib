#include <bits/stdc++.h>
using namespace std;

bool is_valid_coordinate(int i, int j, int &M, int &N) {
  return i >= 0 && i < M && j >= 0 && j < N;
}
vector<int> dirX = {0, 1, 0, -1};
vector<int> dirY = {1, 0, -1, 0};

vector<vector<int>> highestPeak(vector<vector<int>> &isWater) {
  int M = isWater.size();
  int N = isWater[0].size();
  queue<pair<int, int>> Q;

  for (int i = 0; i < isWater.size(); i++) {
    for (int j = 0; j < isWater[i].size(); j++) {
      if (isWater[i][j]) {
        Q.push({i, j});
        isWater[i][j] = 0;
      } else {
        isWater[i][j] = -1;
      }
    }
  }

  while (Q.size()) {
    auto cur = Q.front();
    Q.pop();

    int val_at_cur = isWater[cur.first][cur.second];
    for (int k = 0; k < 4; k++) {
      int next_i = cur.first + dirX[k];
      int next_j = cur.second + dirY[k];
      if (!is_valid_coordinate(next_i, next_j, M, N))
        continue;

      int val_at_neighbor = isWater[next_i][next_j];
      if (!val_at_neighbor)
        continue;
      if (val_at_neighbor == -1) {
        isWater[next_i][next_j] = val_at_cur + 1;
        Q.push({next_i, next_j});
      } else if (abs(val_at_neighbor - val_at_cur) > 1) {
        isWater[next_i][next_j] = val_at_cur + 1;
        Q.push({next_i, next_j});
      }
    }
  }

  return isWater;
}

int main() {
  vector<vector<vector<int>>> test_cases = {
      {{0, 1}, {0, 0}},
      {{0, 0, 1}, {1, 0, 0}, {0, 0, 0}},
  };
  for (auto &t : test_cases) {
    vector<vector<int>> answer = highestPeak(t);

    for (int i = 0; i < answer.size(); i++) {
      for (int j = 0; j < answer[i].size(); j++) {
        cout << answer[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}