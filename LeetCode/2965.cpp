#include <bits/stdc++.h>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid) {
  int n = grid[0].size();
  int n_squared = n * n;
  int total_sum = (n_squared * (n_squared + 1)) / 2;
  int repeated = 0;
  int grid_sum = 0;
  set<int> numbers;
  int r_x = 0;
  for (int i = 0; i < n; i++) {
    repeated ^= (i + 1);
    for (int j = 0; j < n; j++) {
      grid_sum += grid[i][j];
      r_x ^= grid[i][j];
      // if (numbers.count(grid[i][j])) {
      //   repeated = grid[i][j];
      // } else {
      //   numbers.insert(grid[i][j]);
      // }
    }
  }
  repeated = repeated ^ r_x;
  int missing = total_sum - (grid_sum - repeated);

  return {repeated, missing};
}

int main() {
  vector<vector<vector<int>>> test_cases = {
      {{1, 3}, {2, 2}},
      {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}},
  };

  for (auto &t : test_cases) {
    vector<int> answer = findMissingAndRepeatedValues(t);
    for (auto &el : answer) {
      cout << el << " ";
    }
    cout << endl;
  }
  return 0;
}