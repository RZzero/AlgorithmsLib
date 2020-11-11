#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<vector<int>> A = { {1,1,0},{1,0,1},{0,0,0}};

  for (int i = 0; i < A.size(); i++) {
    for(int j = 0; j < A[i].size(); j++) {
      A[i][j] = A[i][j] ^ 1;
    }
    reverse(A[i].begin(), A[i].end());
  }
  return 0;
}
