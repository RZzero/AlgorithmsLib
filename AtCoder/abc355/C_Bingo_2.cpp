#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, T;
  cin >> N >> T;
  vector<int> Q(T);
  for (auto &q : Q)
    cin >> q;

  vector<vector<int>> columns(N);
  vector<vector<int>> rows(N);

  // counter for column
  // counter for row
  // counter for ltr diagonal
  // counter for rtl diagonal

  // convert to set
  vector<int> rtl_diagonal;
  set<int> rtl_diagonal_set;
  vector<int> ltr_diagonal;
  set<int> ltr_diagonal_set;
  for (int i = 0; i < N; i++) {
    if (i == 0) {
      rtl_diagonal.push_back(N);
      ltr_diagonal.push_back(1);
    } else {
      rtl_diagonal.push_back(rtl_diagonal.back() + N - 1);
      ltr_diagonal.push_back(ltr_diagonal.back() + N + 1);
    }
    rtl_diagonal_set.insert(rtl_diagonal.back());
    ltr_diagonal_set.insert(ltr_diagonal.back());
  }

  // for (auto &n : ltr_diagonal_set) {
  //   cout << n << " ";
  // }
  // cout << endl;
  // for (auto &n : rtl_diagonal_set) {
  //   cout << n << " ";
  // }
  // cout << endl;
  int answer = -1;

  int ltr_cnt = 0;
  int rtl_cnt = 0;
  for (int i = 0; i < T; i++) {
    int q = Q[i];

    if (ltr_diagonal_set.count(q)) {
      ltr_cnt++;
    }
    if (rtl_diagonal_set.count(q)) {
      rtl_cnt++;
    }

    bool is_multiple = (q % N) == 0;
    int current_column_cnt = -1;
    int current_row_cnt = -1;

    if (is_multiple) {
      columns[N - 1].push_back(1);
      rows[(q / N) - 1].push_back(1);
      current_column_cnt = columns[N - 1].size();
      current_row_cnt = rows[(q / N) - 1].size();
    } else {
      columns[(q % N) - 1].push_back(1);
      current_column_cnt = columns[(q % N) - 1].size();
      rows[(q / N)].push_back(1);
      current_row_cnt = rows[(q / N)].size();
    }

    if (max(ltr_cnt, max(rtl_cnt, max(current_column_cnt, current_row_cnt))) == N) {
      answer = i + 1;
      break;
    }
  }
  cout << answer << endl;
  return 0;
}