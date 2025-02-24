#include <bits/stdc++.h>
using namespace std;
using Long = long long;

vector<Long> get_PS(vector<int> &row) {
  int size_of_row = row.size();
  vector<Long> PS(row.size(), 0);
  for (int i = 0; i < size_of_row; i++) {
    PS[i] = i == 0 ? row[i] : PS[i - 1] + row[i];
  }
  return PS;
}

vector<Long> get_SS(vector<int> &row) {
  int size_of_row = row.size();
  vector<Long> SS(row.size(), 0);
  for (int i = size_of_row - 1; i >= 0; i--) {
    SS[i] = i == size_of_row - 1 ? row[i] : SS[i + 1] + row[i];
  }
  return SS;
}

Long gridGame(vector<vector<int>> &grid) {
  // First value is always taken by robot #1.
  int size_of_row = grid[0].size();
  grid[0][0] = 0;
  grid[1][size_of_row - 1] = 0;
  vector<Long> SS = get_SS(grid[0]);
  vector<Long> PS = get_PS(grid[1]);
  Long answer = 2 * 1e18;

  // Robot #1 wants robot #2 to have the minimum value possible. Robot #2 Aims to
  // take the maximum of the minimum possible values affected by the choices of R#1.
  for (int i = 0; i < size_of_row; i++) {
    Long top_value = i + 1 < size_of_row ? SS[i + 1] : 0LL;
    Long bottom_value = i - 1 >= 0 ? PS[i - 1] : 0LL;
    answer = min(answer, max(top_value, bottom_value));
  }
  return answer;
}
int main() {
  vector<vector<vector<int>>> test_cases = {
      {{2, 5, 4}, {1, 5, 1}},
      {{3, 3, 1}, {8, 5, 2}},
      {{1, 3, 1, 15}, {1, 3, 3, 1}},
  };

  for (auto &t : test_cases)
    cout << gridGame(t) << endl;
  return 0;
}