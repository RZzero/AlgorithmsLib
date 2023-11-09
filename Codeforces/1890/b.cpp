#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n,m;
    string s, t;
    cin >> n >> m >> s >> t;

    int max_size = n*m;
    string new_good = "";

    auto is_good = [&](string totest) -> bool {
      bool good = true;
      for (int i = 1; i < totest.size(); i++) {
        if (totest[i] == totest[i-1]) {
          good = false;
          break;
        }
      }

      return good;
    };

    bool can = true;

    if (is_good(s)) {
      cout << "YES" << endl;
      continue;
    }
    /*
1
3 3
111
010
    */
    for (int i = 0; i < s.size(); i++) {
      if (i > 0 && s[i] == s[i-1]) {
        new_good = new_good + t + s[i];
      } else {
        new_good += s[i];
      }
      // cout << new_good << endl;
      // if (is_good(new_good)) break;
    }

    if (is_good(new_good)) cout << "YES" << endl;
    else cout << "NO" << endl;

  }
  return 0;
}