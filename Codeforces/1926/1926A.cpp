#include <bits/stdc++.h>
using namespace std;

int count_char(string &s, char x) {
  int cnt = 0;
  for (auto c : s) {
    if (c == x)
      cnt++;
  }
  return cnt;
};

void solve() {
  string S;
  cin >> S;
  int a_count = count_char(S, 'A');
  int b_count = count_char(S, 'B');

  cout << (a_count > b_count ? 'A' : 'B') << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}