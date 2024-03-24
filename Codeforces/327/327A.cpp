#include <bits/stdc++.h>

using namespace std;

int N;
string S = "";
int MEMO[104][104];
int DP(int i, int j) {
  if (i > j) {
    return 0;
  }

  if (MEMO[i][j] > -1)
    return MEMO[i][j];
  // Haciendo flip con ambos
  int res1 = 0;
  string new_S = S;
  for (int k = i; k <= j; k++)
    new_S[k] = (new_S[k] == '0' ? '1' : '0');
  for (int k = 0; k < new_S.size(); k++)
    res1 += new_S[k] - '0';

  // Aumentando I
  int res2 = DP(i + 1, j);

  // Reduciendo J
  int res3 = DP(i, j - 1);

  MEMO[i][j] = max(max(res1, res2), res3);

  return MEMO[i][j];
}
int main() {

  cin >> N;

  memset(MEMO, -1, sizeof(MEMO));

  for (int i = 0; i < N; i++) {
    int dummy;
    cin >> dummy;
    S += to_string(dummy);
  }
  cout << DP(0, N - 1) << endl;

  return 0;
}
