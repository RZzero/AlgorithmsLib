#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  Long N, X;
  cin >> N >> X;
  map<Long, multiset<Long>> candidates;
  map<Long, Long> mapa;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    if (!mapa.count(n)) {
      mapa[n]++;
    } else {
      candidates[n % X].insert(n);
    }
  }

  Long MEX = 0;
  while (true) {
    // cerr << "infinite" << endl;
    if (mapa.count(MEX)) {
      MEX++;
      continue;
    }

    Long mod = MEX % X;
    if (!candidates.count(mod) || !candidates[mod].size())
      break;

    auto candidate_for_mod = candidates[mod].begin();

    if (candidate_for_mod != candidates[mod].end() && *candidate_for_mod <= MEX) {
      mapa[MEX]++;
      candidates[mod].erase(candidate_for_mod);
      MEX++;
    } else {
      break;
    }
  }

  cout << MEX << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}