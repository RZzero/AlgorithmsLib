#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    string s, t;
    cin >> s >> t;
    bool can = false;

    int i = 0;
    int j = 0;

    while (i < s.size() && j < t.size() && !can) {
      if (s[i] == '?' || s[i] == t[j]) {
        s[i] = t[j];
        i++;
        j++;
        if (j >= t.size())
          can = true;
      } else {
        i++;
      }
    }

    if (can) {
      for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?')
          s[i] = 'a';
      }
      cout << "YES" << endl;
      cout << s << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}