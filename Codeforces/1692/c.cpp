#include <bits/stdc++.h>
using namespace std;

char TABLE[10][10];
int main() {
  int T;
  cin >> T;
  while (T--) {
    memset(TABLE, 'X', sizeof(TABLE));

    for (int i = 1; i <= 8; i++) {
      for (int j = 1; j <= 8; j++) {
        cin >> TABLE[i][j];
      }
    }

    int r, c;

    auto is_valid_for_bishop = [](int row, int column) -> bool {
      // left top
      for (int i = row, j = column; TABLE[i][j] != 'X'; i--, j--) {
        if (TABLE[i][j] != '#')
          return false;
      }
      // right top
      for (int i = row, j = column; TABLE[i][j] != 'X'; i--, j++) {
        if (TABLE[i][j] != '#')
          return false;
      }
      // left bottom
      for (int i = row, j = column; TABLE[i][j] != 'X'; i++, j--) {
        if (TABLE[i][j] != '#')
          return false;
      }
      // right bottom
      for (int i = row, j = column; TABLE[i][j] != 'X'; i++, j++) {
        if (TABLE[i][j] != '#')
          return false;
      }
      return true;
    };

    for (int i = 2; i <= 7; i++) {
      bool ok = false;
      for (int j = 2; j <= 7; j++) {
        if (is_valid_for_bishop(i, j)) {
          ok = true;
          r = i;
          c = j;
          break;
        }
      }
      if (ok)
        break;
    }
    cout << r << " " << c << endl;
  }
  return 0;
}