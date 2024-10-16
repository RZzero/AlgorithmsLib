#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  int n;
  cin >> n >> s;
  string timur = "Timur";

  sort(timur.begin(), timur.end());
  sort(s.begin(), s.end());
  cout << (timur == s ? "YES" : "NO")  << endl;
}

int main() {
  int T;
  cin >> T;

  while (T--) {
    solve();
  }
  return 0;
}