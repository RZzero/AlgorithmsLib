#include <bits/stdc++.h>
using namespace std;
using Long = long long;

vector<int> maxPoints(vector<vector<int>> &grid, vector<int> &queries) {
  vector<int> answer;
  sort(queries.begin(), queries.end());

  vector<int> dirX = {1, 0, -1, 0};
  vector<int> dirY = {0, -1, 0, 1};
  auto is_valid = [&](int &N, int &M, int &i, int &j) -> bool {
    if (i < 0 || i >= N || j < 0 || j > M)
      return false;
    return true;
  };
  int N = grid.size();
  int M = grid[0].size();

  vector<vector<bool>> visited(N);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      visited[i].push_back(false);
    }
  }

  queue<int> Q;
  Q.push(grid[0][0]);

  while (Q.size()) {
    int cur = Q.front();
    Q.pop();
    Long sum_so_far = 0;
    int cur_query = 0;
    if ()
  }

  return answer;
}

int main() {

  vector<pair<vector<vector<int>>, vector<int>>> test_cases = {
      {{{1, 2, 3}, {2, 5, 7}, {3, 5, 1}}, {5, 6, 2}},
      {{{5, 2, 1}, {1, 1, 2}}, {3}},
  };

  for (auto &p : test_cases) {
    vector<int> answer = maxPoints(p.first, p.second);
    for (auto &a : answer) {
      cout << a << " ";
    }
    cout << endl;
  }
  return 0;
}