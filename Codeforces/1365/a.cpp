// https://codeforces.com/problemset/problem/1365/A
// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, M;
    cin >> N >> M;
    int table[N+4][M+4];
    memset(table, 2, sizeof table);

    bool taken_rows[N];
    bool taken_columns[M];
  
    memset(taken_rows, false, sizeof taken_rows);
    memset(taken_columns, false, sizeof taken_columns);

    for(int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        cin >> table[i][j];
        if (table[i][j]) {
          taken_rows[i] = true;
          taken_columns[j] = true;
        }
      }
    }

    int not_taken = 0;
    for(int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (!taken_rows[i] && !taken_columns[j]) {
          not_taken++;
          taken_rows[i] = true;
          taken_columns[j] = true;
        }
      }
    }
    
    if (not_taken == 0 || not_taken %2 == 0) {
      cout << "Vivek" << endl;
    } else {
      cout << "Ashish" << endl;
    }
  }

  return 0;
}