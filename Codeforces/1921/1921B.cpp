#include <bits/stdc++.h>
using namespace std;
using Long = long long;
void solve() {
  int N;
  cin >> N;
  string S, T;
  cin >> S >> T;

  // Cuantos hacen falta?
  // Cuantos están mal puestos?
  // Cuantos hay que eliminar?
  int needed = 0;
  int have = 0;
  int badly_positioned = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == '1' && T[i] == '1')
      continue;

    have += S[i] == '1';
    needed += T[i] == '1';
    badly_positioned += S[i] != T[i];
  }
  // cerr << have << " " << needed << " " << badly_positioned << endl;
  int answer = max(have, needed);
  cout << answer << endl;
  // int answer = abs(have - needed) + badly_positioned;
  // cout << answer << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}