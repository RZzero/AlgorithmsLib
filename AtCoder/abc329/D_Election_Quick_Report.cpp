#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  int current_winner = 0;
  int current_winner_cnt = 0;
  map<int, int> mapa;
  for (int i = 0; i < Q; i++) {
    int n;
    cin >> n;
    mapa[n]++;

    if (mapa[n] > current_winner_cnt) {
      current_winner = n;
      current_winner_cnt = mapa[n];
    } else if (mapa[n] == current_winner_cnt) {
      current_winner = min(current_winner, n);
    }
    cout << current_winner << endl;
  }
  return 0;
}