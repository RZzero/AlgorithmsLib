//https://codeforces.com/contest/1375/problem/B
#include <iostream>
#include <vector>
using namespace std;

bool is_valid_grid(vector<vector<int>> &grid, int &N, int &M) {
  bool is_valid = true;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      // corners
      if ((i == 0 && j == 0) || (i == 0 && j == M-1) || (i == N - 1 && j == M - 1) || (i == N - 1 && j == 0)) {
        if (grid[i][j] > 2) is_valid = false;

      // borders
      } else if (((i == 0 || i == N-1) && (j > 0 && j < M-1)) || ((j == M-1 || j == 0) && (i > 0 && i < N-1))) {
        if (grid[i][j] > 3) is_valid = false;

      } else {
      // center
        if (grid[i][j] > 4) is_valid = false;
      }
      
    }
  }
  return is_valid;
}

void force_grid(vector<vector<int>> &grid, int &N, int &M) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      // corners
      if ((i == 0 && j == 0) || (i == 0 && j == M-1) || (i == N - 1 && j == M - 1) || (i == N - 1 && j == 0)) {
        cout << 2 << " ";

      // borders
      } else if (((i == 0 || i == N-1) && (j > 0 && j < M-1)) || ((j == M-1 || j == 0) && (i > 0 && i < N-1))) {
        cout << 3 << " ";
      } else {
        cout << 4 << " ";
      }
      
    }
    cout << endl;
  }
}

int main () {
  int T;
  cin >> T;

  while (T--) {
    int N,M;
    cin >> N >> M;
    vector<vector<int>> grid (N);

    for (int i = 0; i < grid.size(); i++) {
      grid[i] = vector<int> (M);
    }

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        int dum; cin >> dum;
        grid[i][j] = dum;
      }
    }

    if (!is_valid_grid(grid, N, M)) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      force_grid(grid, N, M);
    }
  }
  return 0;
}
