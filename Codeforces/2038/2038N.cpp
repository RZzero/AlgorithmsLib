#include <bits/stdc++.h>
using namespace std;

void solve() {
  string S;
  cin >> S;

  int l = (int)S[0] - '0';
  int r = (int)S[2] - '0';
  char symbol;
  if (l < r) {
    symbol = '<';
  } else if (l > r) {
    symbol = '>';
  } else {
    symbol = '=';
  }

  cout << l << symbol << r << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}