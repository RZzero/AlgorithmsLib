#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long TABLE[204][204];
int N, M;

Long get_sum_for_pos(int initial_i, int initial_j) {
  Long answer = 0;
  // left top
  for (int i = initial_i, j = initial_j; i > 0 && j > 0; i--, j--) {
    answer += TABLE[i][j];
  }
  // right top
  for (int i = initial_i, j = initial_j; i > 0 && j <= M; i--, j++) {
    answer += TABLE[i][j];
  }
  // left bottom
  for (int i = initial_i, j = initial_j; i <= N && j > 0; i++, j--) {
    answer += TABLE[i][j];
  }
  // right bottom
  for (int i = initial_i, j = initial_j; i <= N && j <= M; i++, j++) {
    answer += TABLE[i][j];
  }
  return answer;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    memset(TABLE, -1, sizeof(TABLE));
    Long answer = 0;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= M; j++) {
        cin >> TABLE[i][j];
      }
    }

    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= M; j++) {
        answer = max(get_sum_for_pos(i, j) - (TABLE[i][j] * 1LL * 3), answer);
      }
    }
    cout << answer << endl;
  }
  return 0;
}