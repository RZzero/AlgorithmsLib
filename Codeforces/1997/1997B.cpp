#include <bits/stdc++.h>

using namespace std;

/*
X . X    . X .
. X .    X . X
*/

void solve() {
  int M;
  cin >> M;
  vector<vector<string>> grid(2);
  char table[2][M];

  for (int i = 0; i < 2; i++) {
    string line;
    cin >> line;
    for (int j = 0; j < line.size(); j++) {
      table[i][j] = line[j];
    }
  }

  int cnt = 0;

  for (int i = 0; i < 2; i++) {
    for (int j = 1; j < M - 1; j++) {
      if (i == 0 && table[i][j] == '.' && table[i][j - 1] == '.' && table[i][j + 1] == '.' && table[i + 1][j] == '.' && table[i + 1][j - 1] == 'x' && table[i + 1][j + 1] == 'x') {
        cnt++;
      }
      if (i == 1 && table[i][j] == '.' && table[i][j - 1] == '.' && table[i][j + 1] == '.' && table[i - 1][j] == '.' && table[i - 1][j - 1] == 'x' && table[i - 1][j + 1] == 'x') {
        cnt++;
      }
    }
  }

  cout << cnt << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}