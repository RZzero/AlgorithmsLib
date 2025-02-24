// https://atcoder.jp/contests/abc327/tasks/abc327_c
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> table(9);

bool check_columns() {
  set<int> columns;
  for (int j = 0; j < 9; j++) {
    set<int> internal;
    for (int i = 0; i < 9; i++) {
      internal.insert(table[i][j]);
    }

    if (internal.size() == 9)
      columns.insert(j);
  }

  // cout << columns.size() << endl;

  return columns.size() == 9;
}

bool check_rows() {
  set<int> rows;
  for (int i = 0; i < 9; i++) {
    set<int> internal;
    for (int j = 0; j < 9; j++) {
      internal.insert(table[i][j]);
    }
    if (internal.size() == 9)
      rows.insert(i);
  }
  return rows.size() == 9;
}

bool check_group() {
  int cnt = 0;
  for (int row_offset = 0; row_offset < 9; row_offset += 3) {
    for (int column_offset = 0; column_offset < 9; column_offset += 3) {
      set<int> current;
      for (int i = row_offset; i < 3 + row_offset; i++) {
        for (int j = column_offset; j < 3 + column_offset; j++) {
          current.insert(table[i][j]);
        }
      }
      cnt += current.size() == 9;
    }
  }

  return cnt == 9;
}
int main() {
  for (int i = 0; i < table.size(); i++) {
    for (int j = 0; j < 9; j++) {
      int k;
      cin >> k;
      table[i].push_back(k);
    }
  }

  cout << (check_columns() && check_rows() && check_group()
               ? "Yes"
               : "No")
       << endl;
  return 0;
}