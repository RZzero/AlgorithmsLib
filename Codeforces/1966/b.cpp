#include <bits/stdc++.h>
using namespace std;

bool is_possible(vector<vector<char>> &TABLE, int N, int M) {

  if (TABLE[0][0] == TABLE[N - 1][M - 1] || TABLE[0][M - 1] == TABLE[N - 1][0]) {
    return true;
  }

  if (N > 1) {
    if (TABLE[0][0] == TABLE[N - 1][0]) {
      char current_char = TABLE[0][0];
      for (int i = 1; i < N - 1; i++) {
        if (current_char == TABLE[i][M - 1])
          return true;
      }
    }
    if (TABLE[0][M - 1] == TABLE[N - 1][M - 1]) {
      char current_char = TABLE[0][M - 1];
      for (int i = 1; i < N - 1; i++) {
        if (current_char == TABLE[i][0])
          return true;
      }
    }
  }

  if (M > 1) {
    if (TABLE[N - 1][0] == TABLE[N - 1][M - 1]) {
      char current_char = TABLE[N - 1][0];
      for (int j = 1; j < M - 1; j++) {
        if (current_char == TABLE[0][j])
          return true;
      }
    }

    if (TABLE[0][0] == TABLE[0][M - 1]) {
      char current_char = TABLE[0][0];
      for (int j = 1; j < M - 1; j++) {
        if (current_char == TABLE[N - 1][j])
          return true;
      }
    }
  }
  return false;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N, M;
    cin >> N >> M;
    vector<vector<char>> TABLE(N);
    for (int i = 0; i < N; i++) {
      string S;
      cin >> S;
      for (int j = 0; j < S.size(); j++) {
        TABLE[i].push_back(S[j]);
      }
    }

    cout << (is_possible(TABLE, N, M) ? "YES" : "NO") << endl;
  }
  return 0;
}