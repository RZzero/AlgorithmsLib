#include <bits/stdc++.h>
using namespace std;

struct positions {
  int x, y, z;
};

int main() {
  // freopen("gymnastics.in", "r", stdin);
  // freopen("gymnastics.out", "w", stdout);
  int N, M;
  cin >> N >> M;
  vector<string> spotti(N);
  vector<string> normals(N);

  for (auto &spo : spotti) {
    cin >> spo;
  }

  for (auto &nor : normals) {
    cin >> nor;
  }

  set<string> spotti_combinations;
  set<string> to_delete;

  for (int z = 0; z < N; z++) {
    int lala = 0;
    for (int i = 0; i < M; i++) {
      for (int j = i + 1; j < M; j++) {
        for (int k = j + 1; k < M; k++) {
          string new_comb = "";
          new_comb += spotti[z][i];
          new_comb += spotti[z][j];
          new_comb += spotti[z][k];

          spotti_combinations.insert(new_comb);
          for (int q = 0; q < N; q++) {
            string normal_comb = "";
            normal_comb += normals[q][i];
            normal_comb += normals[q][j];
            normal_comb += normals[q][k];
            if (spotti_combinations.count(normal_comb)) {
              to_delete.insert(normal_comb);
            }
          }
        }
      }
    }
  }

  for (auto &nor : normals) {
    // for (int i = 0; i < nor.size(); i++) {
    //   for (int j = i + 1; j < nor.size(); j++) {
    //     for (int k = j + 1; k < nor.size(); k++) {
    //       string new_comb = "";
    //       new_comb += nor[i] + to_string(i + 1);
    //       new_comb += nor[j] + to_string(j + 1);
    //       new_comb += nor[k] + to_string(k + 1);
    //       if (spotti_combinations.count(new_comb)) {
    //         spotti_combinations.erase(new_comb);
    //       }
    //     }
    //   }
    // }
  }

  int cnt = 0;

  // for (int i = 0; i < M; i++) {
  //   set<char> normal_char;
  //   for (auto &n : normals) {
  //     normal_char.insert(n[i]);
  //   }

  //   bool can = true;
  //   for (auto &spo : spotti) {
  //     can &= !normal_char.count(spo[i]);
  //   }
  //   if (can)
  //     cnt++;
  // }

  cout << spotti_combinations.size() - to_delete.size() << endl;
  return 0;
}