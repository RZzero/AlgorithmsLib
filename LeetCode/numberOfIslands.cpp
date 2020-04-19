#include<iostream>
#include<vector>
#include <ostream>
#include <queue>
#include <set>
#include <algorithm>
#include <stack>

using namespace std;

vector<vector<bool>> visited;
vector<int> dirX = { 0, 1, 0, -1 };
vector<int> dirY = { 1, 0, -1, 0 };

void flood_fill (vector<vector<char>>& grid, int i, int j) {
  if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()) return;
  if (grid[i][j] == '0') return;

  grid[i][j] = '0';

  for (int x = 0; x < dirX.size(); x++) {
    flood_fill(grid, i + dirY[x], j + dirX[x]);
  }
}

int numIslands(vector<vector<char>>& grid) {
  int islands = 0;

  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++) {
      if (grid[i][j] == '1') {
        flood_fill(grid, i, j);
        islands++;
      }
    }
  }

  return islands;
}

int main () {

  vector<vector<char>> test {
    { '1', '1', '0', '0', '0'},
    { '1', '1', '0', '0', '0'},
    { '0', '0', '1', '0', '0'},
    { '0', '0', '0', '1', '1'},
  };

  cout << numIslands(test) << endl;
  return 0;
}