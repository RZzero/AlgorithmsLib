#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<string> lines;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    lines.push_back(s);
  }

  vector<int> row_count(N, 0);
  vector<int> col_count(N, 0);

  for (int i = 0; i < N; i++) {
    int row_cnt = 0;
    int col_cnt = 0;

    int consecutive_row_cnt = 0;
    int consecutive_col_cnt = 0;

    for (int j = 0; j < N; j++) {
      if (lines[i][j] == '#') {
        row_cnt += lines[i][j] == '#';
        row_count[i] = max(row_count[i], row_cnt);
      } else if (lines[i][j] == '.') {
        row_cnt = 0;
      }

      if (lines[j][i] == '#') {
        col_cnt += lines[j][i] == '#';
        col_count[i] = max(col_count[i], col_cnt);
      } else if (lines[j][i] == '.') {
        col_cnt = 0;
      }
    }
    // row_count[i] = row_cnt;
    // col_count[i] = col_cnt;
  }

  bool can = false;
  for (int i = 0; i < N; i++) {
    if (row_count[i] >= 4 || col_count[i] >= 4) {
      cout << "Yes" << endl;
      return 0;
    }
    // cerr << "for_row: " << i << " " << row_count[i] << " ";
    // cerr << "for_col: " << i << " " << col_count[i] << endl;
  }

  cout << "No" << endl;
  return 0;
}