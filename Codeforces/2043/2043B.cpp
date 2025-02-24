#include <bits/stdc++.h>
using namespace std;
using Long = long long;

vector<int> factorial = {1, 4, 6, 24, 120, 720};

void solve() {
  Long N, D;
  cin >> N >> D;

  set<int> possible = {1};
  if (N >= 6) {
    if (N == 6) {
      possible = {1, 3, 9};
    } else {
      possible = {1, 3, 7, 9};
    }
  }

  if (N >= 3 || D == 7) {
    possible.insert(7);
  }

  if (D % 3 == 0 || N >= 3) {
    possible.insert(3);
  }

  if (N >= 3 && D % 3 == 0) {
    possible.insert(9);
  }
  if (D & 1) {
    possible.insert(D);
  }

  for (auto &p : possible) {
    cout << p << " ";
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