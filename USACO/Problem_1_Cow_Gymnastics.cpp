// https://usaco.org/index.php?page=viewproblem2&cpid=963
#include <bits/stdc++.h>
using namespace std;

struct CowPair {
  int L, R;
  bool is_good = true;
};

int main() {
  freopen("gymnastics.in", "r", stdin);
  freopen("gymnastics.out", "w", stdout);
  int K, N;
  cin >> K >> N;

  vector<int> first_list;

  for (int i = 0; i < N; i++) {
    int q;
    cin >> q;
    first_list.push_back(q);
  }

  vector<CowPair> cow_pairs;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      cow_pairs.push_back({first_list[i], first_list[j]});
    }
  }

  for (int i = 0; i < K - 1; i++) {
    vector<int> current_rank(N);
    for (int j = 0; j < N; j++) {
      cin >> current_rank[j];
    }

    for (auto &cp : cow_pairs) {
      if (!cp.is_good)
        continue;

      for (int j = 0; j < N; j++) {
        for (int k = j + 1; k < N; k++) {
          if (cp.L == current_rank[k] and cp.R == current_rank[j]) {
            cp.is_good = false;
          }
        }
      }
    }
  }

  int answer = 0;
  for (auto &cp : cow_pairs) {
    answer += cp.is_good;
  }
  cout << answer << endl;
  return 0;
}