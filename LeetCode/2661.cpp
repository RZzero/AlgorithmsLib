#include <bits/stdc++.h>
using namespace std;

int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat) {
  int answer = -1;
  int M = mat.size();
  int N = mat[0].size();

  // get row and column of each one.
  map<int, pair<int, int>> location;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      location[mat[i][j]] = {i, j};
    }
  }

  // Just simulate while keeping count of columns and rows.
  // once the first gets to M or N. I've found the answer
  vector<int> rows(M, 0);
  vector<int> columns(N, 0);
  for (int i = 0; i < arr.size(); i++) {
    rows[location[arr[i]].first]++;
    columns[location[arr[i]].second]++;
    if (rows[location[arr[i]].first] == N) {
      answer = i;
      break;
    }
    if (columns[location[arr[i]].second] == M) {
      answer = i;
      break;
    }
  }
  return answer;
}

int main() {
  vector<pair<vector<int>, vector<vector<int>>>> test_cases = {
      {{1, 3, 4, 2}, {{1, 4}, {2, 3}}},
      {{2, 8, 7, 4, 1, 3, 5, 6, 9}, {{3, 2, 5}, {1, 4, 6}, {8, 7, 9}}},
      {{6, 2, 3, 1, 4, 5}, {{5, 1}, {2, 4}, {6, 3}}},
  };

  for (auto &p : test_cases) {
    cout << firstCompleteIndex(p.first, p.second) << endl;
  }
  return 0;
}