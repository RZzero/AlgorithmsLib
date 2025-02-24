#include <bits/stdc++.h>
using namespace std;
using Long = long long;

void solve() {
  string S;
  cin >> S;
  int size_of_S = S.size();
  set<char> chars;
  map<char, int> freqs;
  for (auto &c : S) {
    chars.insert(c);
    freqs[c]++;
  }

  if (chars.size() == 1 || size_of_S == 2) {
    cout << "NO" << endl;
    return;
  }

  if (size_of_S % 2 == 0) {
    cout << (chars.size() > 1 ? "YES" : "NO") << endl;
    return;
  }

  int odds = 0;
  int evens = 0;
  for (auto &f : freqs) {
    if (f.second % 2)
      odds = f.second;
    else
      evens++;
  }
  bool can = (odds == 1 && evens > 1) || odds > 1;
  cout << (can ? "YES" : "NO") << endl;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    solve();
  }
  return 0;
}