#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int N;
  string s;
  int Q;

  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  cin >> N >> s >> Q;

  for (int i = 0; i < Q; i++) {
    char c, d;
    cin >> c >> d;
    for (int j = 0; j < (int)alphabet.size(); j++) {
      if (alphabet[j] == c) {
        alphabet[j] = d;
      }
    }
  }

  for (auto &l : s) {
    cout << alphabet[l - 'a'];
  }
  return 0;
}