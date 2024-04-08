#include <bits/stdc++.h>

using namespace std;
vector<int> B;
vector<int> G;
int MEMO[105][105];
int N, M;

int DP(int b_idx, int g_idx) {
  if (g_idx >= M || b_idx >= N) {
    return 0;
  }

  int res = -1e9;
  int res1 = -1e9;
  int res2 = -1e9;
  int res3 = -1e9;

  if (MEMO[b_idx][g_idx] > -1)
    return (MEMO[b_idx][g_idx]);

  if (abs(B[b_idx] - G[g_idx]) <= 1) {

    // Juntandolos
    res1 = 1 + DP(b_idx + 1, g_idx + 1);

  } else {

    // No juntandolos
    res2 = 0 + DP(b_idx + 1, g_idx);
    res3 = 0 + DP(b_idx, g_idx + 1);
  }

  res = max(res1, max(res2, res3));
  MEMO[b_idx][g_idx] = res;

  return MEMO[b_idx][g_idx];
}
int main() {

  memset(MEMO, -1, sizeof(MEMO));
  int dummy;
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> dummy;
    B.push_back(dummy);
  }

  cin >> M;

  for (int i = 0; i < M; i++) {
    cin >> dummy;
    G.push_back(dummy);
  }
  sort(B.begin(), B.end());
  sort(G.begin(), G.end());
  cout << DP(0, 0) << endl;

  return 0;
}
