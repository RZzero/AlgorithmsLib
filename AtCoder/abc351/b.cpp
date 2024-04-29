#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  cin >> N;

  int TABLE_A[N + 1][N + 1];
  int TABLE_B[N + 1][N + 1];

  for (int i = 1; i <= N; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); j++) {
      TABLE_A[i][j + 1] = s[j];
    }
  }
  for (int i = 1; i <= N; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < s.size(); j++) {
      TABLE_B[i][j + 1] = s[j];
    }
  }

  int x = -1, y = -1;
  for (int i = 1; i <= N; i++) {
    bool esc = false;
    for (int j = 1; j <= N; j++) {
      if (TABLE_A[i][j] != TABLE_B[i][j]) {
        x = i;
        y = j;
        esc = true;
        break;
      }
    }
    if (esc)
      break;
  }

  cout << x << " " << y << endl;
  return 0;
}