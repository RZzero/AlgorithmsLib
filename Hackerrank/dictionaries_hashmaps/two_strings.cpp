#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    bool can = false;
    string s, t;
    cin >> s >> t;
    set<char> in_s;

    for (auto &c: s) {
      in_s.insert(c);
    }

    for (auto &c: t) {
      if (in_s.count(c))
        can = true;
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}