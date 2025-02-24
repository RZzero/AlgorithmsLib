#include <bits/stdc++.h>
using namespace std;
const string PI = "314159265358979323846264338327";

void solve() {
  string S;
  cin >> S;
  int cnt = 0;

  int i = 0;
  const int size_of_S = S.size();
  while (i < size_of_S && S[i] == PI[i]) {
    cnt++;
    i++;
  }
  cout << cnt << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}