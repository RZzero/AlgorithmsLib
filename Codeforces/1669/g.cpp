#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int R, C;
    cin >> R >> C;

    vector<vector<string>> grid(R);
    char table[R][C];

    for (int i = 0; i < R; i++) {
      string s; cin >> s;
      for (int j = 0; j < C; j++) {
        table[i][j] = s[j];
      }
    }

    for (int i = R-1; i >= 0; i--) {
      for (int j = 0; j < C; j++) {
        // While not out of bounds, obstacle or asterisk, move
        int k = i;
        while (k < R-1 && table[k][j] == '*' && table[k+1][j] != 'o') {
          swap(table[k][j], table[k+1][j]);
          k++;
        }
      }
    }

    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C; j++) {
        cout << table[i][j];
      }
      cout << endl;
    }


  }
  return 0;
}