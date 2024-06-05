#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<Long> nutrients(M);
  for (auto &n : nutrients)
    cin >> n;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      Long q;
      cin >> q;
      nutrients[j] = max(0LL, nutrients[j] - q);
    }
  }
  bool can = true;
  for (int i = 0; i < M; i++) {
    if (nutrients[i]) {
      can = false;
    }
  }
  cout << (can ? "Yes" : "No") << endl;
  return 0;
}