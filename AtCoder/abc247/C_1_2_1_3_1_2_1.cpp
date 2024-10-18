#include <bits/stdc++.h>
using namespace std;

int main () { 
  int N;
  cin >> N;
  map<int, deque<int>> mapa;
  mapa[1] = { 1 };

  for (int i = 2; i <= 16; i++) {
    mapa[i] = { i };
    for (int j = ((int)mapa[i-1].size())-1; j >= 0; j--) {
      mapa[i].push_front(mapa[i-1][j]);
    }
    for (int j = 0; j < (int)mapa[i-1].size(); j++) {
      mapa[i].push_back(mapa[i-1][j]);
    }
  }

  for (auto &n: mapa[N]) {
    cout << n << " ";
  }
  return 0;
}