// https://onlinejudge.org/external/100/10098.pdf
#include <bits/stdc++.h>

using namespace std;

int main () {
  int T;
  cin >> T;

  while (T--) {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    do {
      cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
    cout << endl;
  }
  return 0;
}
