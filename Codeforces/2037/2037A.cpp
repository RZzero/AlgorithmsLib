#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  int N;
  cin >> N;

  map<int, int> mapa;
  for (int i = 0; i < N; i++) {
    int n;
    cin >> n;
    mapa[n]++;
  }

  int answer = 0;

  for (auto [key, val] : mapa) {
    answer += val / 2;
  }

  cout << answer << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}