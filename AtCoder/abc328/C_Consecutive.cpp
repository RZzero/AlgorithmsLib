#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  string S;
  cin >> N >> Q;
  cin >> S;

  vector<int> CNT(N, 0);
  vector<int> PS(N, 0);
  vector<pair<int, int>> queries(Q);

  for (auto &q : queries) {
    cin >> q.first >> q.second;
  }

  for (int i = 1; i < N; i++) {
    if (S[i - 1] == S[i])
      CNT[i] = 1;

    PS[i] = PS[i - 1] + CNT[i];
  }

  for (int i = 0; i < queries.size(); i++) {
    int l = queries[i].first, r = queries[i].second;
    l--;
    r--;
    if (l != r) {
      cout << PS[r] - PS[l] << endl;
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}