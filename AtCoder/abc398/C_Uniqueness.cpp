#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, pair<int, int>> mapa;
  for (int i = 1; i <= N; i++) {
    int n;
    cin >> n;
    if (!mapa.count(n)) {
      mapa[n] = {1, i};
    } else {
      mapa[n].first++;
    }
  }
  int cur_person = -1;
  int best_integer = -1;
  for (auto &current : mapa) {
    if (current.second.first == 1) {
      best_integer = current.first;
      cur_person = current.second.second;
    }
  }
  cout << cur_person << endl;
  return 0;
}