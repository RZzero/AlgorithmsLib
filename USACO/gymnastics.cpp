#include <bits/stdc++.h>

using namespace std;

struct Pair {
  int L, R;
  bool is_good = true;
};

vector<Pair> make_pairs(vector<int> ranking) {
  vector<Pair> pares;
  for (int i = 0; i < ranking.size(); i++) {
    for (int j = i+1; j < ranking.size(); j++) {
      pares.push_back({ ranking[i], ranking[j], true });
    }
  }
  return pares;
}

void update_consistency(vector<Pair> &pares, vector<Pair> current_ranking) {
  auto has_same_values = [](Pair a, Pair b) -> bool {
    return ((a.L == b.L || a.L == b.R) && (a.R == b.R || a.R == b.L));
  };

  auto maintains_consistency = [](Pair a, Pair b) -> bool {
    return a.L == b.L && a.R == b.R;
  };
  
  for (int i = 0; i < pares.size(); i++) {
    for (int j = 0; j < current_ranking.size(); j++) {
      if (has_same_values(pares[i], current_ranking[j])) {
        if (!maintains_consistency(pares[i], current_ranking[j])) {
          pares[i].is_good = false;
        }
      }
    }
  }

}

int main () {
  freopen("gymnastics.in", "r", stdin);
  freopen("gymnastics.out", "w", stdout);
  int N, K;
  cin >> K >> N;

  vector<Pair> pares;

  for (int i = 0; i < K; i++) {
    vector<int> ranking;
    for (int j = 0; j < N; j++) {
      int r; cin >> r;
      ranking.push_back(r);
    }

    if (i == 0) {
      pares = make_pairs(ranking);
    } else {
      update_consistency(pares, make_pairs(ranking));
    }
  }
  int good_count = 0;
  for (auto &par: pares) good_count += par.is_good;
  cout << good_count << endl;
  return 0;
}