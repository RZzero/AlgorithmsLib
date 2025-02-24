#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int N = S.size();
  int cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] != '0')
      cnt++;
  }

  // cerr << cnt << endl;
  for (int i = N - 1; i > 0; i--) {
    if (S[i] == '0') {
      if (S[i - 1] == '0') {
        i--;
      }
      cnt++;
    }
  }
  cout << cnt << endl;
}