#include <bits/stdc++.h>
using namespace std;

using Long = long long;

int main() {
  int N;
  cin >> N;
  map<Long, int> mapa;

  vector<Long> N_N(N);

  for (int i = 0; i < N; i++) {
    cin >> N_N[i];
  }

  int M;
  cin >> M;
  vector<Long> M_M(M);

  for (int i = 0; i < M; i++) {
    cin >> M_M[i];
  }

  int L;
  cin >> L;
  vector<Long> L_L(L);
  for (int i = 0; i < L; i++) {
    cin >> L_L[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      for (int k = 0; k < L; k++) {
        mapa[N_N[i] + M_M[j] + L_L[k]]++;
      }
    }
  }
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    Long q;
    cin >> q;
    cout << (mapa[q] ? "Yes" : "No") << endl;
  }
  return 0;
}