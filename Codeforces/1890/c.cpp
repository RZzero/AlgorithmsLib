#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    int n; string s;
    cin >> n >> s;
    string t = "01";

    auto is_good = [&](string s) -> bool {
      bool good = true;
      int s_size = s.size();
      for (int i = 0; i < s_size/2; i++) {
        if (s[i] == s[i-1]) {
          good = false;
          break;
        }
      }
      return good;
    };


    if (is_good(s)) {
      cout << 0 << "\n\n";
      continue;
    }

  }
  return 0;
}