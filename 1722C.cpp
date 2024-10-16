#include <bits/stdc++.h>
using namespace std;

void solve() {
  int w;
  cin >> w;

  vector<int> scores(3, 0);
  map<string, int> word_repeat;
  vector<set<string>> player_set(3);

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < w; j++) {
      string s;
      cin >> s;
      word_repeat[s]++;
      player_set[i].insert(s);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (auto &word: player_set[i]) {
      int times = word_repeat[word];
      scores[i] += times == 1 ? 3 : times == 2 ? 1 : 0;
    }
  }

  for (auto &sc: scores) {
    cout << sc << " ";
  }
  cout << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}