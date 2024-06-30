// https://codeforces.com/contest/1512/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    map<int, vector<int>> mapa;
    for (int i = 1; i <= N; i++) {
      int q;
      cin >> q;
      mapa[q].push_back(i);
    }
    for (auto &el : mapa) {
      if (el.second.size() == 1) {
        cout << el.second[0] << endl;
        break;
      }
    }
  }
  return 0;
}