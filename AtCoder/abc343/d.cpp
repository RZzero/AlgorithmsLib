#include <bits/stdc++.h>

using namespace std;
using Long = long long;

int main() {
  int N, T;
  cin >> N >> T;
  vector<Long> score_tracker(N + 5, 0);
  map<Long, Long> mapa;
  mapa[0] = N;

  for (int i = 0; i < T; i++) {
    Long n, s;
    cin >> n >> s;
    Long prev_score_for_n = score_tracker[n];
    Long increased_time = prev_score_for_n + s;

    if (mapa.count(increased_time)) {
      mapa[increased_time] = mapa[increased_time] + 1;
    } else {
      mapa[increased_time] = 1;
    }

    if (mapa[prev_score_for_n] == 1) {
      auto it = mapa.find(prev_score_for_n);
      if (it != mapa.end())
        mapa.erase(it);
    } else {
      mapa[prev_score_for_n] = mapa[prev_score_for_n] - 1;
    }

    score_tracker[n] += s;

    cout << mapa.size() << endl;
  }

  return 0;
}